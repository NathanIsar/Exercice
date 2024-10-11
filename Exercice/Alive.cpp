#include "Alive.h"

Alive::Alive(): vie(0),maxvie(0)
{

}

Alive::Alive(float _vie):vie(_vie),maxvie(_vie)
{


}

Alive::~Alive()
{

}

bool Alive::IsAlive()
{
	return vie > 0.f;
}

float Alive::GetMaxVie()
{
	return maxvie;
}

float Alive::GetVie()
{
	return vie;
}

void Alive::Recevoirdegats(float degats)
{
	vie -= degats;
}
