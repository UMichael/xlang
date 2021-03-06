﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/impl/Component.Edge.2.h"
#include "winrt/Component.h"
namespace winrt::impl
{
    template <typename D> void consume_Component_Edge_IOneClass<D>::Method(int32_t a) const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IOneClass)->Method(a));
    }
    template <typename D> int32_t consume_Component_Edge_IOneClass<D>::First() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Component::Edge::IOneClass)->First(&result));
        return result;
    }
    template <typename D> Component::Edge::OneClass consume_Component_Edge_IOneClassFactory<D>::CreateInstance(int32_t a) const
    {
        void* value;
        check_hresult(WINRT_SHIM(Component::Edge::IOneClassFactory)->CreateInstance(a, &value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Component_Edge_IOneClassStatics<D>::StaticMethod(int32_t a) const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IOneClassStatics)->StaticMethod(a));
    }
    template <typename D> void consume_Component_Edge_IStaticClassStatics<D>::StaticMethod() const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IStaticClassStatics)->StaticMethod());
    }
    template <typename D> void consume_Component_Edge_IThreeClass<D>::Method(int32_t a, int32_t b, int32_t c) const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IThreeClass)->Method(a, b, c));
    }
    template <typename D> int32_t consume_Component_Edge_IThreeClass<D>::First() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Component::Edge::IThreeClass)->First(&result));
        return result;
    }
    template <typename D> int32_t consume_Component_Edge_IThreeClass<D>::Second() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Component::Edge::IThreeClass)->Second(&result));
        return result;
    }
    template <typename D> int32_t consume_Component_Edge_IThreeClass<D>::Third() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Component::Edge::IThreeClass)->Third(&result));
        return result;
    }
    template <typename D> Component::Edge::ThreeClass consume_Component_Edge_IThreeClassFactory<D>::CreateInstance(int32_t a, int32_t b, int32_t c) const
    {
        void* value;
        check_hresult(WINRT_SHIM(Component::Edge::IThreeClassFactory)->CreateInstance(a, b, c, &value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Component_Edge_IThreeClassStatics<D>::StaticMethod(int32_t a, int32_t b, int32_t c) const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IThreeClassStatics)->StaticMethod(a, b, c));
    }
    template <typename D> void consume_Component_Edge_ITwoClass<D>::Method(int32_t a, int32_t b) const
    {
        check_hresult(WINRT_SHIM(Component::Edge::ITwoClass)->Method(a, b));
    }
    template <typename D> int32_t consume_Component_Edge_ITwoClass<D>::First() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Component::Edge::ITwoClass)->First(&result));
        return result;
    }
    template <typename D> int32_t consume_Component_Edge_ITwoClass<D>::Second() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Component::Edge::ITwoClass)->Second(&result));
        return result;
    }
    template <typename D> Component::Edge::TwoClass consume_Component_Edge_ITwoClassFactory<D>::CreateInstance(int32_t a, int32_t b) const
    {
        void* value;
        check_hresult(WINRT_SHIM(Component::Edge::ITwoClassFactory)->CreateInstance(a, b, &value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Component_Edge_ITwoClassStatics<D>::StaticMethod(int32_t a, int32_t b) const
    {
        check_hresult(WINRT_SHIM(Component::Edge::ITwoClassStatics)->StaticMethod(a, b));
    }
    template <typename D> void consume_Component_Edge_IZeroClass<D>::Method() const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IZeroClass)->Method());
    }
    template <typename D> void consume_Component_Edge_IZeroClassStatics<D>::StaticMethod() const
    {
        check_hresult(WINRT_SHIM(Component::Edge::IZeroClassStatics)->StaticMethod());
    }
    template <typename D>
    struct produce<D, Component::Edge::IEmptyClass> : produce_base<D, Component::Edge::IEmptyClass>
    {
    };
    template <typename D>
    struct produce<D, Component::Edge::IOneClass> : produce_base<D, Component::Edge::IOneClass>
    {
        int32_t WINRT_CALL Method(int32_t a) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Method(a);
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
        int32_t WINRT_CALL First(int32_t* result) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *result = detach_from<int32_t>(this->shim().First());
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IOneClassFactory> : produce_base<D, Component::Edge::IOneClassFactory>
    {
        int32_t WINRT_CALL CreateInstance(int32_t a, void** value) noexcept final
        {
            try
            {
                *value = nullptr;
                typename D::abi_guard guard(this->shim());
                *value = detach_from<Component::Edge::OneClass>(this->shim().CreateInstance(a));
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IOneClassStatics> : produce_base<D, Component::Edge::IOneClassStatics>
    {
        int32_t WINRT_CALL StaticMethod(int32_t a) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().StaticMethod(a);
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IStaticClassStatics> : produce_base<D, Component::Edge::IStaticClassStatics>
    {
        int32_t WINRT_CALL StaticMethod() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().StaticMethod();
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IThreeClass> : produce_base<D, Component::Edge::IThreeClass>
    {
        int32_t WINRT_CALL Method(int32_t a, int32_t b, int32_t c) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Method(a, b, c);
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
        int32_t WINRT_CALL First(int32_t* result) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *result = detach_from<int32_t>(this->shim().First());
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
        int32_t WINRT_CALL Second(int32_t* result) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *result = detach_from<int32_t>(this->shim().Second());
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
        int32_t WINRT_CALL Third(int32_t* result) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *result = detach_from<int32_t>(this->shim().Third());
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IThreeClassFactory> : produce_base<D, Component::Edge::IThreeClassFactory>
    {
        int32_t WINRT_CALL CreateInstance(int32_t a, int32_t b, int32_t c, void** value) noexcept final
        {
            try
            {
                *value = nullptr;
                typename D::abi_guard guard(this->shim());
                *value = detach_from<Component::Edge::ThreeClass>(this->shim().CreateInstance(a, b, c));
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IThreeClassStatics> : produce_base<D, Component::Edge::IThreeClassStatics>
    {
        int32_t WINRT_CALL StaticMethod(int32_t a, int32_t b, int32_t c) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().StaticMethod(a, b, c);
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::ITwoClass> : produce_base<D, Component::Edge::ITwoClass>
    {
        int32_t WINRT_CALL Method(int32_t a, int32_t b) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Method(a, b);
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
        int32_t WINRT_CALL First(int32_t* result) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *result = detach_from<int32_t>(this->shim().First());
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
        int32_t WINRT_CALL Second(int32_t* result) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *result = detach_from<int32_t>(this->shim().Second());
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::ITwoClassFactory> : produce_base<D, Component::Edge::ITwoClassFactory>
    {
        int32_t WINRT_CALL CreateInstance(int32_t a, int32_t b, void** value) noexcept final
        {
            try
            {
                *value = nullptr;
                typename D::abi_guard guard(this->shim());
                *value = detach_from<Component::Edge::TwoClass>(this->shim().CreateInstance(a, b));
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::ITwoClassStatics> : produce_base<D, Component::Edge::ITwoClassStatics>
    {
        int32_t WINRT_CALL StaticMethod(int32_t a, int32_t b) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().StaticMethod(a, b);
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IZeroClass> : produce_base<D, Component::Edge::IZeroClass>
    {
        int32_t WINRT_CALL Method() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Method();
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
    template <typename D>
    struct produce<D, Component::Edge::IZeroClassStatics> : produce_base<D, Component::Edge::IZeroClassStatics>
    {
        int32_t WINRT_CALL StaticMethod() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().StaticMethod();
                return 0;
            }
            catch (...) { return to_hresult(); }
        }
    };
}
namespace winrt::Component::Edge
{
    inline OneClass::OneClass(int32_t a) :
        OneClass(impl::call_factory<OneClass, Component::Edge::IOneClassFactory>([&](auto&& f) { return f.CreateInstance(a); }))
    {
    }
    inline void OneClass::StaticMethod(int32_t a)
    {
        impl::call_factory<OneClass, Component::Edge::IOneClassStatics>([&](auto&& f) { return f.StaticMethod(a); });
    }
    inline void StaticClass::StaticMethod()
    {
        impl::call_factory<StaticClass, Component::Edge::IStaticClassStatics>([&](auto&& f) { return f.StaticMethod(); });
    }
    inline ThreeClass::ThreeClass(int32_t a, int32_t b, int32_t c) :
        ThreeClass(impl::call_factory<ThreeClass, Component::Edge::IThreeClassFactory>([&](auto&& f) { return f.CreateInstance(a, b, c); }))
    {
    }
    inline void ThreeClass::StaticMethod(int32_t a, int32_t b, int32_t c)
    {
        impl::call_factory<ThreeClass, Component::Edge::IThreeClassStatics>([&](auto&& f) { return f.StaticMethod(a, b, c); });
    }
    inline TwoClass::TwoClass(int32_t a, int32_t b) :
        TwoClass(impl::call_factory<TwoClass, Component::Edge::ITwoClassFactory>([&](auto&& f) { return f.CreateInstance(a, b); }))
    {
    }
    inline void TwoClass::StaticMethod(int32_t a, int32_t b)
    {
        impl::call_factory<TwoClass, Component::Edge::ITwoClassStatics>([&](auto&& f) { return f.StaticMethod(a, b); });
    }
    inline ZeroClass::ZeroClass() :
        ZeroClass(impl::call_factory<ZeroClass>([](auto&& f) { return f.template ActivateInstance<ZeroClass>(); }))
    {
    }
    inline void ZeroClass::StaticMethod()
    {
        impl::call_factory<ZeroClass, Component::Edge::IZeroClassStatics>([&](auto&& f) { return f.StaticMethod(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Component::Edge::IEmptyClass> : winrt::impl::hash_base<winrt::Component::Edge::IEmptyClass> {};
    template<> struct hash<winrt::Component::Edge::IOneClass> : winrt::impl::hash_base<winrt::Component::Edge::IOneClass> {};
    template<> struct hash<winrt::Component::Edge::IOneClassFactory> : winrt::impl::hash_base<winrt::Component::Edge::IOneClassFactory> {};
    template<> struct hash<winrt::Component::Edge::IOneClassStatics> : winrt::impl::hash_base<winrt::Component::Edge::IOneClassStatics> {};
    template<> struct hash<winrt::Component::Edge::IStaticClassStatics> : winrt::impl::hash_base<winrt::Component::Edge::IStaticClassStatics> {};
    template<> struct hash<winrt::Component::Edge::IThreeClass> : winrt::impl::hash_base<winrt::Component::Edge::IThreeClass> {};
    template<> struct hash<winrt::Component::Edge::IThreeClassFactory> : winrt::impl::hash_base<winrt::Component::Edge::IThreeClassFactory> {};
    template<> struct hash<winrt::Component::Edge::IThreeClassStatics> : winrt::impl::hash_base<winrt::Component::Edge::IThreeClassStatics> {};
    template<> struct hash<winrt::Component::Edge::ITwoClass> : winrt::impl::hash_base<winrt::Component::Edge::ITwoClass> {};
    template<> struct hash<winrt::Component::Edge::ITwoClassFactory> : winrt::impl::hash_base<winrt::Component::Edge::ITwoClassFactory> {};
    template<> struct hash<winrt::Component::Edge::ITwoClassStatics> : winrt::impl::hash_base<winrt::Component::Edge::ITwoClassStatics> {};
    template<> struct hash<winrt::Component::Edge::IZeroClass> : winrt::impl::hash_base<winrt::Component::Edge::IZeroClass> {};
    template<> struct hash<winrt::Component::Edge::IZeroClassStatics> : winrt::impl::hash_base<winrt::Component::Edge::IZeroClassStatics> {};
    template<> struct hash<winrt::Component::Edge::EmptyClass> : winrt::impl::hash_base<winrt::Component::Edge::EmptyClass> {};
    template<> struct hash<winrt::Component::Edge::OneClass> : winrt::impl::hash_base<winrt::Component::Edge::OneClass> {};
    template<> struct hash<winrt::Component::Edge::StaticClass> : winrt::impl::hash_base<winrt::Component::Edge::StaticClass> {};
    template<> struct hash<winrt::Component::Edge::ThreeClass> : winrt::impl::hash_base<winrt::Component::Edge::ThreeClass> {};
    template<> struct hash<winrt::Component::Edge::TwoClass> : winrt::impl::hash_base<winrt::Component::Edge::TwoClass> {};
    template<> struct hash<winrt::Component::Edge::ZeroClass> : winrt::impl::hash_base<winrt::Component::Edge::ZeroClass> {};
}
