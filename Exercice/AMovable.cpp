#include "AMovable.h"

AMovable::AMovable() :direction() , vitesse(0)
{

}

AMovable::AMovable(Vector2 _direction, float _vitesse) : direction(_direction), vitesse(_vitesse)
{


}

AMovable::~AMovable()
{

}

Vector2 AMovable::GetDirection()
{
	return direction;
}

void AMovable::SetDirection(Vector2 _direction)
{
	direction.SetX(_direction.GetX());
	direction.SetY(_direction.GetY());
}

float AMovable::GetSpeed()
{
	return vitesse;
}

void AMovable::SetSpeed(float _vitesse)
{
	vitesse = _vitesse;
}
