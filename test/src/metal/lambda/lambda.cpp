// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <metal/lambda/lambda.hpp>

#include "test.hpp"

#define MATRIX(M, N) \
    ASSERT((metal::lambda<SEQ()>::type<VALS(N)>), (SEQ()<VALS(N)>)); \
    ASSERT((metal::lambda<SEQ(M)>::type<VALS(M)>), (SEQ(M)<VALS(M)>)); \
    ASSERT((metal::lambda<EXPR()>::type<VALS(N)>::type), (EXPR()<VALS(N)>::type)); \
    ASSERT((metal::lambda<EXPR(M)>::type<VALS(M)>::type), (EXPR(M)<VALS(M)>::type)); \
/**/

GEN(MATRIX)