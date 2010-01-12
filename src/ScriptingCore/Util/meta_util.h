/**********************************************************\ 
Original Author: Georg Fritzsche

Created:    December 22, 2009
License:    Dual license model; choose one of two:
            Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html
            - or -
            GNU Lesser General Public License, version 2.1
            http://www.gnu.org/licenses/lgpl-2.1.html

Copyright 2009 Georg Fritzsche, Firebreath development team
\**********************************************************/

#ifndef H_META_UTIL_22122009
#define H_META_UTIL_22122009

#include "meta_util_impl.h"

namespace FB { namespace meta 
{
#ifdef _WINDOWS
    // get the plain type of T (without pointers, references, ...)
    template<typename T>
    struct plain_type 
        : FB::meta::detail::plain_type<T> {};

    ///////////////////////////////////////////////////////
    // STL style container classification
    //   T - the type to compare

    template<class T>
    struct is_container 
        : FB::meta::detail::is_container<T> {};

    template<class T>
    struct is_assoc_container 
        : FB::meta::detail::is_assoc_container<T> {};

    template<class T>
    struct is_non_assoc_container 
        : FB::meta::detail::is_non_assoc_container<T> {};

    template<class T>
    struct is_pseudo_container 
        : FB::meta::detail::is_pseudo_container<T> {};

    ///////////////////////////////////////////////////////
    // enable_if helpers:
    //   T - the type to compare
    //   R - the return type

    template<class T, typename R=void>
    struct enable_for_containers 
        : FB::meta::detail::enable_for_containers_impl<T,R> {};

    template<class T, typename R=void>
    struct disable_for_containers 
        : FB::meta::detail::disable_for_containers_impl<T,R> {};

    template<class T, typename R=void>
    struct enable_for_assoc_containers 
        : FB::meta::detail::enable_for_assoc_containers_impl<T,R> {};

    template<class T, typename R=void>
    struct disable_for_assoc_containers 
        : FB::meta::detail::disable_for_assoc_containers_impl<T,R> {};

    template<class T, typename R=void>
    struct enable_for_non_assoc_containers 
        : FB::meta::detail::enable_for_non_assoc_containers_impl<T,R> {};

    template<class T, typename R=void>
    struct disable_for_non_assoc_containers 
        : FB::meta::detail::disable_for_non_assoc_containers_impl<T,R> {};
#endif
}; };


#endif