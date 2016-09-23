
//场景管理类

#ifndef _GaddessCap_SceneManger_
#define _GaddessCap_SceneManger_

#include<iostream>
#include"cocos2d.h"

USING_NS_CC;

class SceneManger{
public:
	Scene *loadScene ;
	Scene *openScene ;
	Scene *clockScene  ;

public:
	void createLoadScene();
	void goOpenScene();
	void goClockScene();





};


#endif 