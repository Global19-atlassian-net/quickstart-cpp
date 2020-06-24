#include "AppDelegate.h"

#include "MainMenuScene.h"
#include "TicTacToeScene.h"
USING_NS_CC;

// Set based on the image width.
const float kFrameWidth = 600;
// Set based on the image height plus 40 for windows bar.
const float kFrameHeight = 640;

AppDelegate::AppDelegate() {}

AppDelegate::~AppDelegate() {}
bool AppDelegate::applicationDidFinishLaunching() {
  auto director = Director::getInstance();
  auto glview = director->getOpenGLView();
  if (glview == NULL) {
    glview = GLViewImpl::create("Tic-Tac-Toe");
    glview->setFrameSize(kFrameWidth, kFrameHeight);
    director->setOpenGLView(glview);
  }

  auto scene = MainMenuScene::createScene();
  director->runWithScene(scene);

  return true;
}

void AppDelegate::applicationDidEnterBackground() {}

void AppDelegate::applicationWillEnterForeground() {}