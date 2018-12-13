#include "pch.h"
#include "winrt/Windows.Foundation.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct Sample : implements<Sample, IStringable>
    {
        hstring ToString()
        {
            return L"Sample";
        }

        ~Sample()
        {
            // It's safe to QI/AddRef/Release inside destructor.
            IStringable s;
            check_hresult(QueryInterface(guid_of<IStringable>(), put_abi(s)));
            REQUIRE(s.ToString() == L"Sample");

            REQUIRE(released);
            REQUIRE(!destroyed);
            destroyed = true;
        }

        static void final_release(std::unique_ptr<Sample> ptr) noexcept
        {
            // It's safe to QI/AddRef/Release inside final_release.
            IStringable s;
            check_hresult(ptr->QueryInterface(guid_of<IStringable>(), put_abi(s)));
            REQUIRE(s.ToString() == L"Sample");

            // References must be released prior to destroying the unique_ptr.
            s = nullptr;

            REQUIRE(!released);
            REQUIRE(!destroyed);
            released = true;
            ptr = nullptr;
            REQUIRE(destroyed);
        }

        static inline bool released;
        static inline bool destroyed;
    };
}

TEST_CASE("FinalRelease")
{
    auto s = make<Sample>();
    REQUIRE(!Sample::released);
    REQUIRE(!Sample::destroyed);
    s = nullptr;
    REQUIRE(Sample::released);
    REQUIRE(Sample::destroyed);
}
