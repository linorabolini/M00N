//
//  TestRunner.h
//  M00N
//
//  Created by Lino Rabolini on 1/26/15.
//
//

#ifndef __M00N__TestRunner__
#define __M00N__TestRunner__

#include <iostream>
#include "Suite.h"

class TestRunner
{
public:
    void add(Suite*);
    void run();
    
private:
    std::vector<Suite*> suites;
};

#endif /* defined(__M00N__TestRunner__) */
