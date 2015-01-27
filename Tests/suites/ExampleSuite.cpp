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
    ADD_TEST(ExampleSuite::test_of_tests);
    ADD_TEST(ExampleSuite::test_vectors);
}

void ExampleSuite::test_of_tests()
{
    ASSERT_TRUE(1 == 1);
    ASSERT_FALSE(1 == 3);
    ASSERT_EQUAL(1, 1);
    ASSERT_NOT_EQUAL(1, 2);
}

void ExampleSuite::test_vectors()
{
    int a = 6;
    std::vector<int> vec = {a};
    
    ASSERT_EQUAL(a, vec[0]);
    a++;
    ASSERT_NOT_EQUAL(a, vec[0]);
    ASSERT_EQUAL(a, 7);
    ASSERT_EQUAL(vec[0], 6);
}