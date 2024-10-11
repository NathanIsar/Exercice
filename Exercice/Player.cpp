#include "Player.h"
#include"iostream"
Player::Player(): Entity(),Alive(),AMovable()
{
	std::cout << "Player just created at x : " << GetPosition().GetX() << " and y = " << GetPosition().GetY() << " with " << GetMaxVie() << " with " << GetDirection().GetX() << " and y = " << GetDirection().GetY() << std::endl;
}
Player::Player(Vector2 _Position, float _vie, Vector2 _direction,float _vitesse):Entity(_Position),Alive(_vie),AMovable(_direction,_vitesse)
{
	std::cout << "Player just created at x : " << _Position.GetX() << " and y = " << _Position.GetY() << " with " << GetMaxVie() << " with " << _direction.GetX() << " and y = " << _direction.GetY() << std::endl;

}

Player::~Player()
{

}

void Player::Recevoirdegats(float degats)
{
	Alive::Recevoirdegats(degats);
	std::cout << " Player just die " << std::endl;

}

void Player::Movement()
{
	void Movement();
	SetPosition(Vector2((GetPosition().GetX() + GetDirection().GetX()) * GetSpeed(), (GetPosition().GetY() + GetDirection().GetY()) * GetSpeed()));//erreur
	std::cout << " Player move to x : " << Position.GetX() << " and y = " << Position.GetY() << std::endl;
}


void Player::Attaquer(Alive* vivant)
{
	void Attaquer(Alive * vivant);
	vivant->Recevoirdegats(10);
	std::cout << " Player just attacked " << std::endl;

}
