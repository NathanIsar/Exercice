#include "World.h"
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

void World::Init()
{


	entities.push_back(new StaticObject(0, 0));
	entities.push_back(new BreakableObject(1.f, 1.f, 1.f));
	entities.push_back(new Mob(6.f, 6.f, 20.f,Vector2(1.f,1.f), 1.f));
	entities.push_back(new Player(Vector2(6.f,6.f), 10.f,Vector2(1.f,1.f), 1.f));
	
}

World::World()
{

}

World::~World()
{
}

bool World::GetIsFinished()
{
	return IsFinished;
}

void World::Step()
{
	for (Entity* entity : entities)
	{

		if (Mob* tmpmob = dynamic_cast <Mob*>(entity))
		{
			for (Entity* e2 : entities)
			{
				if (dynamic_cast<BreakableObject*>(e2)) 
				{
					float dx = e2->GetPosition().GetX() - tmpmob->GetPosition().GetX();
					float dy = e2->GetPosition().GetY() - tmpmob->GetPosition().GetY();

					float distance = sqrt((dx * dx) + (dy * dy));

					float VecteurDeplacementX = (dx / distance);
					float VecteurDeplacementY = (dy / distance);
					
					tmpmob->SetDirection(Vector2(VecteurDeplacementX, VecteurDeplacementY));
					tmpmob->Movement();


				}


			}
		}
		if (Player* tmplayer = dynamic_cast <Player*>(entity))
		{
			for (Entity* e3 : entities)
			{
				if (Mob* mob = dynamic_cast<Mob*>(e3))
				{
					if (mob->IsAlive()) 
					{
						float dx = e3->GetPosition().GetX() - tmplayer->GetPosition().GetX();
						float dy = e3->GetPosition().GetY() - tmplayer->GetPosition().GetY();

						float distance = sqrt((dx * dx) + (dy * dy));


						float VecteurDeplacementX = (dx / distance);
						float VecteurDeplacementY = (dy / distance);

						tmplayer->SetDirection(Vector2(VecteurDeplacementX, VecteurDeplacementY));
						tmplayer->Movement();
						//refectoriing pour faire une méthode
						
						if (distance < 1)
						{

							tmplayer->Attaquer(mob);
						}
						
							
						

					}
					else
					{
						for (Entity* e4 : entities)
						{
							if (BreakableObject* BO = dynamic_cast<BreakableObject*>(e4))
							{

								float dx = e4->GetPosition().GetX() - tmplayer->GetPosition().GetX();
								float dy = e4->GetPosition().GetY() - tmplayer->GetPosition().GetY();

								float distance = sqrt((dx * dx) + (dy * dy));

								float VecteurDeplacementX = (dx / distance);
								float VecteurDeplacementY = (dy / distance);

								tmplayer->SetDirection(Vector2(VecteurDeplacementX, VecteurDeplacementY));
								tmplayer->Movement();

								if (distance < 1)
								{
									tmplayer->Attaquer(BO);

								}



							}


						}


					}

				}




				

			}




		}


	}

	bool mort = true;

	for (Entity* e5 : entities)
	{

		if (BreakableObject* e6 = dynamic_cast<BreakableObject*>(e5))
		{
			if (e6->IsAlive())
			{
				mort = false;
				
				break;

			}

		}
		if (Mob* e7 = dynamic_cast<Mob*>(e5))
		{
			if (e7->IsAlive())
			{
				mort = false;
				break;
			}
		}

	}
	if (mort)
	{
		std::cout << " Simulation termine " << std::endl;
	}
	IsFinished = mort;




}

