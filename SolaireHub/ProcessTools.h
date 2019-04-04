#pragma once
#include <Windows.h>
#include <TlHelp32.h>

extern HANDLE hProcess;
extern DWORD pid;

struct MODULE
{
	DWORD dwBase;
	DWORD dwSize;
};

template <typename T>
T RPM(DWORD Address)
{
	T Buffer;
	ReadProcessMemory(hProcess, (PVOID*)Address, &Buffer, sizeof(T), NULL);
	return Buffer;
}
template <typename T>
BOOL WPM(DWORD Address, T Value)
{
	return WriteProcessMemory(hProcess, (PVOID*)Address, &Value, sizeof(T), NULL);
}

namespace pTools
{
	bool findProcess(const char * exeName);
	MODULE getModule(const char * moduleName);
}