#include "StaticObject.h"
#include "iostream"

StaticObject::StaticObject()
{

}

StaticObject::StaticObject(float _x, float _y): Entity(_x,_y)
{

	std::cout << "Static Object just created at x = " << Position.GetX() << " and y = " << Position.GetY() << std::endl;

}
