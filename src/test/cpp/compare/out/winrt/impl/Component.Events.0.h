﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/base.h"
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
}
namespace winrt::Component::Events
{
    struct IClass;
    struct IClassStatics;
    struct Class;
    struct Handler;
}
namespace winrt::impl
{
    template <> struct category<Component::Events::IClass>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Events::IClassStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Component::Events::Class>
    {
        using type = class_category;
    };
    template <> struct category<Component::Events::Handler>
    {
        using type = delegate_category;
    };
    template <> struct name<Component::Events::IClass>
    {
        static constexpr auto & value{ L"Component.Events.IClass" };
    };
    template <> struct name<Component::Events::IClassStatics>
    {
        static constexpr auto & value{ L"Component.Events.IClassStatics" };
    };
    template <> struct name<Component::Events::Class>
    {
        static constexpr auto & value{ L"Component.Events.Class" };
    };
    template <> struct name<Component::Events::Handler>
    {
        static constexpr auto & value{ L"Component.Events.Handler" };
    };
    template <> struct guid_storage<Component::Events::IClass>
    {
        static constexpr guid value{ 0x54633255,0x4816,0x5148,{ 0x95,0x7E,0xB5,0x93,0x45,0x12,0x89,0x02 } };
    };
    template <> struct guid_storage<Component::Events::IClassStatics>
    {
        static constexpr guid value{ 0x6491DCE6,0xCD00,0x594B,{ 0x8A,0x8D,0xF7,0x0E,0x9D,0x37,0xD9,0x41 } };
    };
    template <> struct guid_storage<Component::Events::Handler>
    {
        static constexpr guid value{ 0x5C2EDFC1,0x563E,0x5532,{ 0xBD,0xEE,0x90,0xEE,0xBD,0xA7,0xF1,0xA2 } };
    };
    template <> struct default_interface<Component::Events::Class>
    {
        using type = Component::Events::IClass;
    };
    template <> struct abi<Component::Events::IClass>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL add_Member(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t WINRT_CALL remove_Member(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Component::Events::IClassStatics>
    {
        struct type : inspectable_abi
        {
            virtual int32_t WINRT_CALL add_Static(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t WINRT_CALL remove_Static(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Component::Events::Handler>
    {
        struct type : unknown_abi
        {
            virtual int32_t WINRT_CALL Invoke(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Component_Events_IClass
    {
        winrt::event_token Member(Component::Events::Handler const& handler) const;
        using Member_revoker = impl::event_revoker<Component::Events::IClass, &impl::abi_t<Component::Events::IClass>::remove_Member>;
        Member_revoker Member(auto_revoke_t, Component::Events::Handler const& handler) const;
        void Member(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Component::Events::IClass>
    {
        template <typename D> using type = consume_Component_Events_IClass<D>;
    };
    template <typename D>
    struct consume_Component_Events_IClassStatics
    {
        winrt::event_token Static(Component::Events::Handler const& handler) const;
        using Static_revoker = impl::event_revoker<Component::Events::IClassStatics, &impl::abi_t<Component::Events::IClassStatics>::remove_Static>;
        Static_revoker Static(auto_revoke_t, Component::Events::Handler const& handler) const;
        void Static(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Component::Events::IClassStatics>
    {
        template <typename D> using type = consume_Component_Events_IClassStatics<D>;
    };
}
