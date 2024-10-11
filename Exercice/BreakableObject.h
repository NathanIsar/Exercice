#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{




public :

	BreakableObject();
	BreakableObject(float _x, float _y, float vie);

	void Recevoirdegats(float degats) override;
};