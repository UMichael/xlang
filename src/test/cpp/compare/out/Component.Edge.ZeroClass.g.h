﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/Component.Edge.h"
namespace winrt::Component::Edge::implementation
{
    template <typename D, typename... I>
    struct WINRT_EBO ZeroClass_base : implements<D, Component::Edge::IZeroClass, I...>
    {
        using base_type = ZeroClass_base;
        using class_type = Component::Edge::ZeroClass;
        using implements_type = typename ZeroClass_base::implements_type;
        using implements_type::implements_type;
        
        operator impl::producer_ref<class_type> const() const noexcept
        {
            return { to_abi<default_interface<class_type>>(this) };
        }

        hstring GetRuntimeClassName() const
        {
            return L"Component.Edge.ZeroClass";
        }
    };
}
namespace winrt::Component::Edge::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct WINRT_EBO ZeroClassT : implements<D, Windows::Foundation::IActivationFactory, Component::Edge::IZeroClassStatics, I...>
    {
        using instance_type = Component::Edge::ZeroClass;

        hstring GetRuntimeClassName() const
        {
            return L"Component.Edge.ZeroClass";
        }
        Windows::Foundation::IInspectable ActivateInstance() const
        {
            return make<T>();
        }
        void StaticMethod()
        {
            return T::StaticMethod();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_ZEROCLASS_XAML_G_H) || __has_include("Component.Edge.ZeroClass.xaml.g.h")
#include "Component.Edge.ZeroClass.xaml.g.h"
#else

namespace winrt::Component::Edge::implementation
{
    template <typename D, typename... I>
    using ZeroClassT = ZeroClass_base<D, I...>;
}

#endif
