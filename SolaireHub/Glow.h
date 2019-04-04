#pragma once
#include "Offsets.h"
#include <cstddef>
#include "Main.h"
Offsets::GlowStruct EntGlow; // GlowStruct 
Offsets::GlowStruct2 EntGlow2; // GlowStruct 
Offsets::GlowStruct2 nothin; // GlowStruct 

struct GlowStruct
{
	DWORD pEntity;
	float r;
	float g;
	float b;
	float a;
	char unk1[16];
	bool m_bRenderWhenOccluded;
	bool m_bRenderWhenUnoccluded;
	bool m_bFullBloom;
	char unk2[17];
};

namespace Glow
{
	DWORD LocalTeam = 0;
	DWORD GlowObject = 0;
	DWORD LocalPlayer = 0;
	DWORD Entity = 0;
	DWORD EntityList = 0;
	DWORD Health = 0;
	DWORD IsDormant = 0;
	DWORD GlowIndex = 0;
	DWORD TeamNum = 0;
	DWORD ClassID = 0;

	void Run()
	{
	//	for (int i = 0; i < 200; i++)
	//	{
	//		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(fProcess.__dwordClient + hazedumper::signatures::dwGlowObjectManager), &GlowObject, sizeof(int), NULL);
	//		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i), &Entity, sizeof(int), NULL);
	//		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(Entity + 0x8), &ClassID, sizeof(int), NULL);
	//		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x8), &ClassID, sizeof(int), NULL);
	//		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x1), &ClassID, sizeof(int), NULL);
	//		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x14), &ClassID, sizeof(int), NULL);
	//		//WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
	//		if (ClassID == 31)
	//		{
	//			if (chicken)
	//			{
	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);

	//			}

	//		}
	//		if (weaponbool)
	//		{
	//			if (ClassID == 1)
	//			{
	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
	//				//	Sleep(espdelay);
	//			}
	//			if (ClassID >= 204 && ClassID <= 244)
	//			{


	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
	//				//Sleep(espdelay);
	//			}
	//		}
	//		if (bombglowbool)
	//		{
	//			if (ClassID == 40)
	//			{
	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
	//			}
	//			if (ClassID == 3)
	//			{
	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
	//			}
	//			if (ClassID == 29)
	//			{
	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
	//			}
	//			else if (ClassID == 108)
	//			{
	//				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow2, sizeof(EntGlow2), NULL);
	//			}
	//		}


	//		
	//			if (&_ents[i] == _localPlayer)	continue; // Entity is localplyer, continue.
	//			if (_ents[i].lifeState != 0)	continue; // Entity is dead or dying, continue.
	//			if (_ents[i].bDormant == true)	continue; // Entity is dormant,	continue.

	//			bool enemy = (_ents[i].iTeamNum != _localPlayer->iTeamNum) ? true : false;
	//			DWORD obj = GlowObjectManager + _ents[i].iGlowIndex * sizeof(GlowStruct);
	//			GlowStruct g = RPM<GlowStruct>(obj);
	//			if (enemy)
	//			{
	//				g.r = 1.f;
	//				g.g = 0.f;
	//				g.b = 0.f;
	//				g.a = 1.f;
	//				g.m_bRenderWhenOccluded = true;
	//			}
	//			else
	//			{
	//				g.r = 0.f;
	//				g.g = 1.f;
	//				g.b = 0.f;
	//				g.a = 1.f;
	//				g.m_bRenderWhenOccluded = true;
	//			}
	//			WPM<GlowStruct>(obj, g);
	//		
	//	}
	}
}