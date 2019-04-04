#include "Entity.h"
#include "ProcessTools.h"
//#include "Main.h"
Entity::Entity()
{
	Base = 0;
}

Entity::~Entity()
{
}

void Entity::ReadInfo(int index)
{
	if (!Base) Base = RPM<DWORD>(EntityList + index * 0x10);
	if (Base == LocalPlayer) _localPlayer = this;
	iTeamNum = RPM<int>(Base + m_iTeamNum);
	lifeState = RPM<int>(Base + m_lifeState);
	iGlowIndex = RPM<int>(Base + m_iGlowIndex);
	bDormant = RPM<bool>(Base + m_bDormant);
	//objectglow = RPM<int>(Base + 0x517B700);
	int Ent = RPM<int>(Base);
}
void ReadAllEntityInformation()
{
	for (int i = 0; i < 64; i++)
	{
		_ents[i].ReadInfo(i);
	}
}
