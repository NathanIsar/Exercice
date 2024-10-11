#pragma once
#include "Vector2.h"

class Entity 
{
protected:

	Vector2 Position;

public:

	Entity();
	Entity(float _x, float _y);
	Entity(Vector2 _Position);
   ~Entity();

   virtual Vector2 GetPosition();
   virtual void SetPosition(Vector2 Position);



};