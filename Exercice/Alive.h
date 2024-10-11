#pragma once

class Alive 
{

	float maxvie;
	float vie;


public:

	Alive();
	Alive(float _vie);
	~Alive();
	virtual bool IsAlive();
	virtual float GetMaxVie();
	virtual float GetVie();
	virtual void Recevoirdegats(float degats);




};