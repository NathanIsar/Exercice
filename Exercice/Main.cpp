#include "Mob.h"
#include "Alive.h"
#include "AMovable.h"
#include "BreakableObject.h"
#include "Entity.h"
#include "IAttacker.h"
#include "Player.h"
#include "StaticObject.h"
#include "Vector2.h"
#include "World.h"

int main() 
{
	

	World world;

	world.Init();
	while (!world.GetIsFinished()) 
	{
		world.Step();
		

	}

}