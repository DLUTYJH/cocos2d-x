
#include "SceneManger.h"
#include "LoadLayer.h"
#include "OpenLayer.h"
#include "ClockLayer.h"

void SceneManger::createLoadScene(){
	loadScene = Scene::create();
	LoadLayer *layer = LoadLayer::create();
	layer->sm = this ;
	loadScene->addChild(layer);


}
void SceneManger::goOpenScene(){

	openScene = Scene::create();
	OpenLayer *layer = OpenLayer::create();
	layer->sm = this ;
	openScene->addChild(layer);

	Director::getInstance()->replaceScene(openScene);

}
void SceneManger::goClockScene(){
	clockScene  = Scene::create();
	ClockLayer *layer = ClockLayer::create();

	layer->sm = this ;
	Director::getInstance()->replaceScene(clockScene);

}