#pragma once
#include"Vector2.h"

class AMovable 
{
protected:

	Vector2 direction;
	float vitesse;

public:

	AMovable();
	AMovable(Vector2 _direction,float _vitesse);
	~AMovable();

	Vector2 GetDirection();
	virtual void SetDirection(Vector2 _direction);
	virtual float GetSpeed();
	virtual void SetSpeed(float _vitesse);

	virtual void Movement() = 0;


};