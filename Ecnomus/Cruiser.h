#pragma once
#include "Component.h"
class Cruiser :
	public Component
{
public:
	Cruiser();
	Cruiser(int,int);
	~Cruiser();

	std::string getName()override;
	void initializePieces()override;
	void updatePositonPieces()override;

};

