#include "Offsets.h"
//---------------- modules
MODULE __client;
MODULE __engine;
//---------------- storage variables
DWORD LocalPlayer;
DWORD EntityList;
DWORD GlowObjectManager;
//---------------- entity declarations
Entity _ents[64];
Entity* _localPlayer;