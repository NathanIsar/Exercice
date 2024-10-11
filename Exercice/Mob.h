#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable, public Vector2
{
public:

	Mob();
	Mob(float _x, float _y, float _vie, Vector2 _direction, float vitesse);
	void Recevoirdegats(float degats) override;
	void Movement()override;
	~Mob();
	


};