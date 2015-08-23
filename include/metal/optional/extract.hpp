// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef METAL_OPTIONAL_EXTRACT_HPP
#define METAL_OPTIONAL_EXTRACT_HPP

#include <metal/optional/conditional.hpp>
#include <metal/optional/just.hpp>

namespace metal
{
    /// \ingroup optional
    /// \brief ...
    template<typename opt>
    using from_just = typename opt::type;


    /// \ingroup optional
    /// \brief ...
    template<typename opt, typename def>
    using from_maybe = conditional_t<is_just_t<opt>, opt, just<def>>;
}

#endif