#include "TestsScene.h"

USING_NS_CC;

Scene* TestsScene::createScene()
{
    auto scene = Scene::create();
    auto layer = TestsScene::create();

    scene->addChild(layer);
    return scene;
}

// on "init" you need to initialize your instance
bool TestsScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto returnButton = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(TestsScene::returnHomeCallback, this));
    
	returnButton->setPosition(Vec2(origin.x + visibleSize.width - returnButton->getContentSize().width/2 ,
                                origin.y + returnButton->getContentSize().height/2));
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(returnButton, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
    
    auto label = Label::createWithTTF("Tests screen", "fonts/Marker Felt.ttf", 24);
    
    // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));
    
    // add the label as a child to this layer
    this->addChild(label, 1);
    
    this->runTests();
    
    return true;
}


void TestsScene::returnHomeCallback(Ref* pSender)
{
    auto director = Director::getInstance();
    auto scene = MainMenuScene::createScene();
    auto color = Color3B(0,0,0);
    auto transition = TransitionFade::create(0.5, scene, color);
    
    director->replaceScene(transition);
}

void TestsScene::runTests()
{
    TestRunner tr;
    ExampleSuite ex;
    
    // add tests
    tr.add(&ex);
    
    // run tests
    tr.run();
}
