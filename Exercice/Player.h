#pragma once
#include "iostream"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive,  public AMovable, public IAttacker
{
	

public :


	Player();
	Player(Vector2 _Position,float _vie,Vector2 _direction, float _vitesse);
	~Player();
	void Recevoirdegats(float degats) override;
	void Movement()override;
	void Attaquer(Alive* vivant)override;





};