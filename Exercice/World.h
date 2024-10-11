#pragma once
#include "iostream"
#include "Mob.h"
#include "Alive.h"
#include "AMovable.h"
#include "BreakableObject.h"
#include "Entity.h"
#include "IAttacker.h"
#include "Player.h"
#include "StaticObject.h"
#include "Vector2.h"
#include "vector"

class World 
{

	bool IsFinished = false;

public:

	std::vector <Entity*> entities;

	void Init();

	World();

   ~World();


   bool GetIsFinished();

   void Step();

   


};