

//
#ifndef _GaddessCap_OpenLayer_
#define _GaddessCap_OpenLayer_

#include<iostream>
#include"cocos2d.h"
#include"SceneManger.h"

USING_NS_CC;

class OpenLayer: public Layer {
public:
	CREATE_FUNC(OpenLayer);


	virtual  bool init();
public:
	SceneManger *sm; 

};


#endif 