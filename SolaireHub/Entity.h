#pragma once
#include "Offsets.h"
class Entity
{
public:
	Entity();
	~Entity();
	int act;
	DWORD Base;

	int iTeamNum;
	int lifeState;
	int iGlowIndex;
	int ent;
	bool bDormant;
	int objectglow;
	int bombID;
	void ReadInfo(int index);
};

void ReadAllEntityInformation();

extern Entity	_ents[64];
extern Entity*	_localPlayer;