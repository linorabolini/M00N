//
//  Suite.h
//  M00N
//
//  Created by Lino Rabolini on 1/26/15.
//
//

#ifndef __M00N__Suite__
#define __M00N__Suite__

#include <iostream>

class Suite
{
public:
    virtual void run();
    typedef void (Suite::* Func)();
    void registerTest(Func, const std::string&);
    
    // Data structure
    struct TestData
    {
        Func			_func;
        std::string		_name;
        
        TestData(Func func, const std::string& name)
        : _func(func), _name(name) {}
    };
    
private:
    std::vector<TestData> tests;
};

#define ADD_TEST(func)  \
    registerTest(static_cast<Func>(&func), #func);

#define ASSERT_TRUE(expr)  \
    assert(expr);

#define ASSERT_FALSE(expr)  \
    assert(!(expr));

#define ASSERT_EQUAL(exp1, exp2)  \
    assert((exp1) == (exp2));

#define ASSERT_NOT_EQUAL(exp1, exp2)  \
    assert((exp1) != (exp2));

#endif /* defined(__M00N__Suite__) */
