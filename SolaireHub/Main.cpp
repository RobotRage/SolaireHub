#include "Main.h"
#include "stdafx.h"
#include "windows.h"
#include "iostream"
#include "csgo.hpp"
#include <Windows.h>
#include <TlHelp32.h>
#include <tchar.h>
#include "Entity.h"
#include "ProcessTools.h"
#include "Offsets.h"
#include "Glow.h"
#include <stdio.h>
#include <TlHelp32.h>
#include "Main.h"
#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib") 
#include <tlhelp32.h>
#include <windows.h>
#include <tlhelp32.h>
#include <iostream>
#include <string>
#include "Entity.h"
#include "cmath"
#include "vector"
#include <cstdio>
#include <ctime>
#include <chrono>

int crosshairid;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SolaireHub::Main form;
	Application::Run(%form);

}
void timer()
{
	
}
void  esploop()
{	

}
DWORD LocalPlayerBase = hazedumper::signatures::dwLocalPlayer;
DWORD Crosshair = hazedumper::netvars::m_iCrosshairId;
DWORD PlayerBase;
DWORD team = hazedumper::netvars::m_iTeamNum;
//DWORD dwEntityList = hazedumper::signatures::dwEntityList;
DWORD m_flFlashMaxAlpha = hazedumper::netvars::m_flFlashMaxAlpha;
DWORD sds = hazedumper::netvars::m_Collision;
//m_flFlashMaxAlpha
//DWORD EntityList = hazedumper::signatures::dwEntityList;
typedef struct {
	float Matrix[3][4];
} Matrix3x4_t;

typedef std::chrono::high_resolution_clock Clock;

std::chrono::steady_clock::time_point tend;
std::chrono::steady_clock::time_point tstart;
void shoot()
{
	
	if (std::chrono::duration_cast<std::chrono::milliseconds>(tend - tstart).count() >= triggedelay)
	{
		tstart = Clock::now();

		System::Windows::Forms::Application::DoEvents();
		INPUT Input = { 0 };

		Input.type = INPUT_MOUSE;

		Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
		::SendInput(1, &Input, sizeof(INPUT));


		Input.type = INPUT_MOUSE;
		Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
		::SendInput(1, &Input, sizeof(INPUT));
	}


	tend = Clock::now();
}

CHackProcess fProcess;
CHackProcess __dwordClient;
float fov = 10.0;
bool testin = true;
bool testing2 = false;


unsigned char sendpack = 1;
unsigned char dontsend = 0;

DWORD getEntBoneMatrix(DWORD playerBase)
{
	DWORD temp;
	ReadProcessMemory(fProcess.__HandleProcess, (BYTE*)(playerBase + hazedumper::netvars::m_dwBoneMatrix), &temp, sizeof(temp), NULL);
	return temp;
}
D3DXVECTOR3	getbone(DWORD playerBase)
{
    Matrix3x4_t boneMatrix;
	ReadProcessMemory(fProcess.__HandleProcess, (BYTE*)(getEntBoneMatrix(playerBase) + 8 * 0x30), &boneMatrix, sizeof(boneMatrix), NULL);
	return{
		boneMatrix.Matrix[0][3],
		boneMatrix.Matrix[1][3],
		boneMatrix.Matrix[2][3]
	};
}
static bool ScreenTransform(const D3DXVECTOR3& point, D3DXVECTOR3& screen)
{
	D3DXMATRIX temp; 
	ReadProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordClient + hazedumper::signatures::dwViewMatrix), &temp, sizeof(temp), NULL);

	const D3DXMATRIX& w2sMatrix = temp;
	screen.x = w2sMatrix.m[0][0] * point.x + w2sMatrix.m[0][1] * point.y + w2sMatrix.m[0][2] * point.z + w2sMatrix.m[0][3];
	screen.y = w2sMatrix.m[1][0] * point.x + w2sMatrix.m[1][1] * point.y + w2sMatrix.m[1][2] * point.z + w2sMatrix.m[1][3];
	screen.z = 0.0f;

	float w = w2sMatrix.m[3][0] * point.x + w2sMatrix.m[3][1] * point.y + w2sMatrix.m[3][2] * point.z + w2sMatrix.m[3][3];

	if (w < 0.001f) {
		screen.x *= 100000;
		screen.y *= 100000;
		return true;
	}

	float invw = 1.0f / w;
	screen.x *= invw;
	screen.y *= invw;

	return false;
}
static bool WorldToScreen(const D3DXVECTOR3 &origin, D3DXVECTOR3 &screen, int w, int h)
{
	if (!ScreenTransform(origin, screen)) {
		screen.x = (w / 2.0f) + (screen.x * w) / 2;
		screen.y = (h / 2.0f) - (screen.y * h) / 2;

		return true;
	}
	return false;
}

DWORD getPlayer()
{
	D3DXVECTOR3 w2sHead;
	DWORD plrToAim = NULL;
	double lowestDist = aimbotdist;

	HPVector.clear();
	
	for (int i = 1; i <= 32; i++)
	{
	DWORD Entity;
	DWORD ClassID;
	DWORD TeamNum;
	DWORD GlowObject = 0;
	DWORD localteam;
	DWORD base;
	
	DWORD TargetTeam;
	int hpTemp;
	ReadProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordClient + hazedumper::signatures::dwEntityList + (i * 0x10)), &base, sizeof(base), NULL);
	WorldToScreen(getbone(base), w2sHead, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CXSCREEN));
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + 0xF4), &localteam, sizeof(localteam), NULL);
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(base + 0x8), &ClassID, sizeof(int), NULL);

		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(base + 0xF4), &TargetTeam, sizeof(int), NULL);


		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x8), &ClassID, sizeof(int), NULL);
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x1), &ClassID, sizeof(int), NULL);
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x14), &ClassID, sizeof(int), NULL);
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(Entity + 0xF4), &TeamNum, sizeof(int), NULL);// Getting the entitys Team Number

		double dist = sqrt(pow((GetSystemMetrics(SM_CXSCREEN) / 2) - w2sHead.x, 2) + pow((GetSystemMetrics(SM_CXSCREEN) / 2) - w2sHead.y, 2));
		bool valid;
		ReadProcessMemory(fProcess.__HandleProcess, (LPVOID)(base + 0xE9), &valid, sizeof(valid), NULL);

		DWORD hp;
		ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(base + hazedumper::netvars::m_iHealth), &hp, sizeof(hp), NULL);
		/*
		if (ClassID == 40 && TargetTeam != localteam && hp > 0)
		{			
			HpVals += std::to_string((static_cast<int>(hp))) + "\n";	
			
		}
		*/
		if (dist < lowestDist && ClassID == 40 && TargetTeam != localteam && hp > 0)
		{
			lowestDist = dist;
			plrToAim = base;
		}
	}
	return plrToAim;
}
/*
void MouseMove(int x, int y)
{
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
	Input.mi.dx = x;
	Input.mi.dy = y;
	::SendInput(1, &Input, sizeof(INPUT));
}
*/
bool spotted(DWORD playerBase)
{
	bool temp;

	ReadProcessMemory(fProcess.__HandleProcess, (LPVOID)(playerBase + hazedumper::netvars::m_bSpotted), &temp, sizeof(temp), NULL);
	return temp;
}

void MouseMove(int x, int y)
{
	INPUT Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_MOVE;
	Input.mi.dx = x * aimbotSnap;
	Input.mi.dy = y * aimbotSnap;
	int a = aimbotSnap;
	::SendInput(1, &Input, sizeof(INPUT));
}

void aimbot(DWORD playerToAimAt)
{
	D3DXVECTOR3 w2sHead;
	if (playerToAimAt != NULL)
	{
		WorldToScreen(getbone(playerToAimAt), w2sHead, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CXSCREEN));
		float headX = (w2sHead.x - (GetSystemMetrics(SM_CXSCREEN) / 2)) / 2;
		float headY = (w2sHead.y - (GetSystemMetrics(SM_CXSCREEN) / 2)) / 2;
		int x = w2sHead.x;
		int y = w2sHead.y;
	if (spotted(playerToAimAt) == 1)
	{
		
			//if (headX > -aimbotdist && headX <aimbotdist && headY > -aimbotdist && headY < aimbotdist)
			//{
				// mouse_event(0, headX, headY, 0, 0);
				MouseMove(headX, headY);

				//SetCursorPos(headX, headY);
			//}
			POINT mouse;
			GetCursorPos(&mouse);
		if (shootonhead)
		{
			if (mouse.x > (x - 5) && mouse.x < (x + 5))
			{
				if (crosshairid > 0)
				{
					shoot();
				}
				//Sleep(10);
			}
		}
		}
	}
}
void blockMouse()
{
	INPUT Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_MOVE;
	Input.mi.dx = 90;
	Input.mi.dy = 90;
	::SendInput(1, &Input, sizeof(INPUT));
}
void trigger()
{
	fProcess.RunProcess();



	DWORD m_bSpotted = 0x93D;
	BYTE JNE[] = { 0x75 };

		
		DWORD target;
		DWORD hpEn;
		DWORD hpR;
		DWORD CID;

		int localteam;
		int targetteam;
		float flash = 000;
		int temp;
		int rad = 1;
		bool radar = true;
		int m_jumpflags;

		EntityList = __dwordClient.dwBase + dwEntityList;

		//EntityList = 0x4CE34DC;

			
		
			ReadProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordClient + LocalPlayerBase), &PlayerBase, sizeof(LocalPlayerBase), NULL);
			ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + Crosshair), &crosshairid, sizeof(crosshairid), NULL);

			ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + 0xF4), &localteam, sizeof(localteam), NULL);

			ReadProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordClient + dwEntityList + (crosshairid -1) * 0x10), &target, sizeof(target), NULL);
			ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(target + 0xF4), &targetteam, sizeof(targetteam), NULL);
			//WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + m_flFlashMaxAlpha), &flash, sizeof(0.0f), NULL);

			
			


			if (aimbotbool)
			{
				aimbot(getPlayer());
			}

			if (flashbool)
			{
				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + m_flFlashMaxAlpha), &flash, sizeof(0.0f), NULL);			
			}
			//dwbSendPackets
			if (thirdp)
			{
				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + hazedumper::netvars::m_iObserverMode), &testin, sizeof(testin), NULL);
				
			}
			else
			{
				WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + hazedumper::netvars::m_iObserverMode), &testing2, sizeof(testing2), NULL);
			}
			
			if (fakelagbool)
			{
				
					WriteProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordEngine + hazedumper::signatures::dwbSendPackets), &dontsend, sizeof(dontsend), NULL);
					Sleep(lagdelay);
					WriteProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordEngine + hazedumper::signatures::dwbSendPackets), &sendpack, sizeof(sendpack), NULL);
				
			
				if (onjump)
				{
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(PlayerBase + 0x100), &m_jumpflags, sizeof(m_jumpflags), NULL);

						if (m_jumpflags != 257)
						{
							WriteProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordEngine + hazedumper::signatures::dwbSendPackets), &dontsend, sizeof(dontsend), NULL);
							Sleep(lagdelayjump);
							WriteProcessMemory(fProcess.__HandleProcess, (BYTE*)(fProcess.__dwordEngine + hazedumper::signatures::dwbSendPackets), &sendpack, sizeof(sendpack), NULL);
						}
						else
						{

						}
				}

			}

			DWORD base;
			DWORD loopdist = 0x10;
			DWORD entitylist;
			bool isnowspotted;
			bool isnowdormant;
			bool newval = true;
			DWORD dwGlowObjectManager = 0x5223730;
			DWORD m_dwLocalPlayer = hazedumper::signatures::dwLocalPlayer;
			DWORD m_iTeamNum = 0xF4;
			DWORD LocalTeam;

			DWORD GlowObject = 0;
			DWORD Entity = 0;
			DWORD ClassID = 0;
			DWORD LocalPlayer = 0;
			DWORD TeamNum;


			EntGlow.red = 1.f; EntGlow.green = 0.f; EntGlow.blue = 0.f; EntGlow.alpha = 1.f;

			HpVals = "";

				for (int i = 0; i <= 64; i++)
				{
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(fProcess.__dwordClient + hazedumper::signatures::dwGlowObjectManager), &hpEn, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(hpEn + 0x38 * i), &hpEn, sizeof(int), NULL);

					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(hpEn + 0x8), &CID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(CID + 0x8), &CID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(CID + 0x1), &CID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(CID + 0x14), &CID, sizeof(int), NULL);

					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(hpEn + hazedumper::netvars::m_iHealth), &hpR, sizeof(hpR), NULL);

					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(hpEn + 0xF4), &target, sizeof(int), NULL);

					if (CID == 40 && target != localteam && hpR > 0)
					{
						HpVals += std::to_string((static_cast<int>(hpR))) + "\n";
					}

					//std::cout << "ss" << std::endl;
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(fProcess.__dwordClient + m_dwLocalPlayer), &LocalPlayer, sizeof(int), NULL); // Gets LocalPlayer
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(LocalPlayer + m_iTeamNum), &LocalTeam, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(fProcess.__dwordClient + hazedumper::signatures::dwGlowObjectManager), &GlowObject, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i), &Entity, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(Entity + 0x8), &ClassID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x8), &ClassID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x1), &ClassID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(ClassID + 0x14), &ClassID, sizeof(int), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(Entity + m_iTeamNum), &TeamNum, sizeof(int), NULL);// Getting the entitys Team Number
					std::cout << ClassID << std::endl;
						
					DWORD TeamNumchams;
					ReadProcessMemory(fProcess.__HandleProcess, (LPVOID)((DWORD)fProcess.__dwordClient + EntityList + ((i - 1) * 16)), &entitylist, sizeof(DWORD), NULL);
					ReadProcessMemory(fProcess.__HandleProcess, (PBYTE*)(entitylist + m_iTeamNum), &TeamNumchams, sizeof(int), NULL);// Getting the entitys Team Number
					byte Red[4] = { 255, 0, 0, 255 };
					byte Green[4] = { 0, 255, 0, 255 };

					if (LocalTeam != TeamNumchams)
					{
						WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)((entitylist)+0x70), &Red, sizeof(Red), NULL);
					}
					else
					{
						WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)((entitylist)+0x70), &Green, sizeof(Green), NULL);
					}

					if (mapbool)
					{
						WriteProcessMemory(fProcess.__HandleProcess, (LPVOID)(entitylist + m_bSpotted), &newval, sizeof(bool), NULL);
					}
					if (chicken)
					{
						if (ClassID == 36)
						{
							WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
						}
					}

					if (espbool)
					{

						if (ClassID == 40)
						{
							if (LocalTeam != TeamNum)
							{

								Sleep(espdelay);
								WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);

							}
						
						}
					}
					if (weaponbool)
					{
						if (ClassID == 1)
						{

							WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
							Sleep(espdelay);
						}
						if (ClassID >= 231 && ClassID <= 272)
						{
							WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
							Sleep(espdelay);
						}
					}
					if (bombglowbool)
					{
						if (ClassID == 34)
						{
							WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
						}			
						else if (ClassID == 126)
						{
							WriteProcessMemory(fProcess.__HandleProcess, (PBYTE*)(GlowObject + 0x38 * i + 0x4), &EntGlow, sizeof(EntGlow), NULL);
						}
					}
					if (ClassID == 128)
					{
						starttimer = true;
					}
				}
		

			BlockInput(false);

			if (crosshairid > 0 )
			{
				if (targetteam != localteam )
				{

					if (triggerbool)
					{
						
						shoot();
					}
				}
				else
				{
				//	BlockInput(true);
				//	blockMouse();
				}
			}		
}
