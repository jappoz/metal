/// @copyright Bruno Dutra 2015
/// Distributed under the Boost Software License, Version 1.0.
/// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <boost/metal/functional/traits/is_evaluable.hpp>

#include "test/variadic.hpp"
#include "test/functions.hpp"
#include "test/main.hpp"

using namespace boost::metal;

BOOST_METAL_ASSERT((not_<is_evaluable<test::fundamental>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::incomplete>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::empty>>));
BOOST_METAL_ASSERT((is_evaluable<test::evaluable>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::call>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::fundamental, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::incomplete, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::empty, void>>));
BOOST_METAL_ASSERT((is_evaluable<test::evaluable, void>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::call, void>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::fundamental, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::incomplete, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::empty, void, void*>>));
BOOST_METAL_ASSERT((is_evaluable<test::evaluable, void, void*>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::call, void, void*>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::incomplete>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::empty>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::evaluable>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::call>::call>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::incomplete>::call, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::empty>::call, void>>));
BOOST_METAL_ASSERT((is_evaluable<test::unary<test::evaluable>::call, void>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::call>::call, void>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::incomplete>::call, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::empty>::call, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::evaluable>::call, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::unary<test::call>::call, void, void*>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::incomplete>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::empty>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::evaluable>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::call>::call>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::incomplete>::call, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::empty>::call, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::evaluable>::call, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::call>::call, void>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::incomplete>::call, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::empty>::call, void, void*>>));
BOOST_METAL_ASSERT((is_evaluable<test::binary<test::evaluable>::call, void, void*>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::binary<test::call>::call, void, void*>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::incomplete>::call>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::empty>::call>>));
BOOST_METAL_ASSERT((is_evaluable<test::n_ary<test::evaluable>::call>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::call>::call>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::incomplete>::call, void>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::empty>::call, void>>));
BOOST_METAL_ASSERT((is_evaluable<test::n_ary<test::evaluable>::call, void>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::call>::call, void>>));

BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::incomplete>::call, void, void*>>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::empty>::call, void, void*>>));
BOOST_METAL_ASSERT((is_evaluable<test::n_ary<test::evaluable>::call, void, void*>));
BOOST_METAL_ASSERT((not_<is_evaluable<test::n_ary<test::call>::call, void, void*>>));