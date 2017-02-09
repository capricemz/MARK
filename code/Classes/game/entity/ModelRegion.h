#ifndef __MODEL_REGION_H__
#define __MODEL_REGION_H__

#include "ModelUnit.h"

NS_BEGIN_GAME_ENTITY

class ModelRegion : public ModelUnit
{
public:
	CREATE_FUNC(ModelRegion);

	ModelRegion();
	~ModelRegion();

	virtual bool init();

protected:
	virtual cocos2d::Sprite* createSprite();//���崴��Sprite�ķ���������ʵ��

private:

};

NS_END_END

#endif