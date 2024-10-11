#include "Mob.h"
#include "iostream"
Mob::Mob()
{

}

Mob::Mob(float _x, float _y, float _vie, Vector2 _direction, float _vitesse):Entity(_x,_y),Alive(_vie),AMovable(_direction,_vitesse)
{
	std::cout << "Mob just created at x : " << Position.GetX() << " and y = " << Position.GetY() << " with " << GetMaxVie() << " with " << _direction.GetX()<<" and y = "<< _direction.GetY() << std:: endl;

}

void Mob::Recevoirdegats(float degats)
{
	Alive::Recevoirdegats(degats);
	std::cout << " Mob just die " << std::endl;
}

void Mob::Movement()
{
	void Movement();
	if (IsAlive()) 
	{

	
	SetPosition(Vector2(GetPosition().GetX() + GetDirection().GetX() * GetSpeed(), GetPosition().GetY() + GetDirection().GetY() * GetSpeed()));
	std::cout << "Mob move to x : " << Position.GetX() << " and y = " << Position.GetY() << std::endl;
    }
}

Mob::~Mob()
{

}
