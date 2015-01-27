//
//  Suite.cpp
//  M00N
//
//  Created by Lino Rabolini on 1/26/15.
//
//

#include "Suite.h"

void Suite::registerTest(Func func, const std::string& name)
{
    tests.push_back(TestData(func, name));
}

void Suite::run()
{
    for(auto &test : tests)
    {
        std::cout << test._name;
        std::bind(test._func, this)();
        std::cout << "  OK\n";
    }
        
}