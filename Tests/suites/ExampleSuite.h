//
//  ExampleSuite.h
//  M00N
//
//  Created by Lino Rabolini on 1/26/15.
//
//

#ifndef __M00N__ExampleSuite__
#define __M00N__ExampleSuite__

#include <iostream>
#include "../Suite.h"

class ExampleSuite : public Suite
{
public:
    ExampleSuite();
    
public:
    void test_of_tests();
    void test_vectors();
};

#endif /* defined(__M00N__ExampleSuite__) */
