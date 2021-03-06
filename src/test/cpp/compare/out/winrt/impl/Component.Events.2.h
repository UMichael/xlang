﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Component.Events.1.h"
namespace winrt::Component::Events
{
    struct Handler : Windows::Foundation::IUnknown
    {
        Handler(std::nullptr_t = nullptr) noexcept {}
        Handler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> Handler(L lambda);
        template <typename F> Handler(F* function);
        template <typename O, typename M> Handler(O* object, M method);
        template <typename O, typename M> Handler(com_ptr<O>&& object, M method);
        template <typename O, typename M> Handler(weak_ref<O>&& object, M method);
        void operator()(int32_t value) const;
    };
    struct WINRT_EBO Class : Component::Events::IClass
    {
        Class(std::nullptr_t) noexcept {}
        Class(void* ptr, take_ownership_from_abi_t) noexcept : Component::Events::IClass(ptr, take_ownership_from_abi) {}
        Class();
        static winrt::event_token Static(Component::Events::Handler const& handler);
        using Static_revoker = impl::factory_event_revoker<Component::Events::IClassStatics, &impl::abi_t<Component::Events::IClassStatics>::remove_Static>;
        static Static_revoker Static(auto_revoke_t, Component::Events::Handler const& handler);
        static void Static(winrt::event_token const& token);
    };
}
