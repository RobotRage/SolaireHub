#pragma once
#include <Windows.h>
#include "ProcessTools.h"
#include "Entity.h"
#include "csgo.hpp"
//---------------- modules --------------------------------
extern MODULE __client;
extern MODULE __engine;
//---------------- offsets --------------------------------
static const DWORD m_iTeamNum = hazedumper::netvars::m_iTeamNum;
static const DWORD m_lifeState = hazedumper::netvars::m_lifeState;
static const DWORD m_iGlowIndex = hazedumper::netvars::m_iGlowIndex;
static const DWORD m_bDormant = 0xE9;
//---------------------------------------------------------
static const DWORD dwLocalPlayer = hazedumper::signatures::dwLocalPlayer;
static const DWORD dwEntityList = hazedumper::signatures::dwEntityList;
static const DWORD dwGlowObjectManager = hazedumper::signatures::dwGlowObjectManager;
//---------------- storage variables ----------------------
extern DWORD LocalPlayer;
extern DWORD EntityList;
extern DWORD GlowObjectManager;

