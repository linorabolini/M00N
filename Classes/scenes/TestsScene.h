#ifndef __TESTS_SCENE_H__
#define __TESTS_SCENE_H__

#include "cocos2d.h"
#include "MainMenuScene.h"
#include "../Tests/TestRunner.h"
#include "../Tests/suites/ExampleSuite.h"

class TestsScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    void returnHomeCallback(cocos2d::Ref* pSender);
    void runTests();
    
    CREATE_FUNC(TestsScene);
};

#endif // __MAINMENU_SCENE_H__
