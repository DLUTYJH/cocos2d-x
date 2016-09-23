

//º”‘ÿ≤„
#ifndef _GaddessCap_LoadLayer_
#define _GaddessCap_LoadLayer_

#include<iostream>
#include"cocos2d.h"
#include"SceneManger.h"

USING_NS_CC;

class LoadLayer: public Layer {
public:
	CREATE_FUNC(LoadLayer);

	virtual  bool init();
public:
	SceneManger *sm ;

};


#endif 