//
//  TestRunner.cpp
//  M00N
//
//  Created by Lino Rabolini on 1/26/15.
//
//

#include "TestRunner.h"

void TestRunner::add(Suite *suite)
{
    this->suites.push_back(suite);
}

void TestRunner::run()
{
    for (auto &suite : this->suites)
        suite->run();
}