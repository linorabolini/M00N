//
//  ExampleSuite.cpp
//  M00N
//
//  Created by Lino Rabolini on 1/26/15.
//
//

#include "ExampleSuite.h"

ExampleSuite::ExampleSuite()
{
    ADD_TEST(ExampleSuite::test_1);
}

void ExampleSuite::test_1()
{
    ASSERT_TRUE(1 == 1);
    ASSERT_FALSE(1 == 3);
    ASSERT_EQUAL(1, 1);
    ASSERT_NOT_EQUAL(1, 2);
}