

//º”‘ÿ≤„
#ifndef _GaddessCap_ClockLayer_
#define _GaddessCap_ClockLayer_

#include<iostream>
#include"cocos2d.h"
#include"SceneManger.h"

USING_NS_CC;

class ClockLayer: public Layer {
public:
	CREATE_FUNC(ClockLayer);

	virtual  bool init();
public:
	SceneManger  *sm;

};


#endif 