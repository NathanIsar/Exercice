#include "BreakableObject.h"

#include"iostream"
BreakableObject::BreakableObject()
{
}
BreakableObject::BreakableObject(float _x, float _y, float _vie) :Entity(_x, _y), Alive(_vie)
{
	std::cout << " Breakable Object just created at x = " << Position.GetX() << " and y = " << Position.GetY() << " with " <<GetMaxVie() << std::endl;

}

void BreakableObject::Recevoirdegats(float degats)
{
	Alive::Recevoirdegats(degats);
	std::cout << " Breakable Object just broke " << std::endl;
}

