#include "ProcessTools.h"
HANDLE hProcess;
DWORD pid;
void allbs()
{
	int sdfsdfs;
}
namespace pTools
{
	bool findProcess(const char * exeName)
	{

		PROCESSENTRY32 pEntry;
		ZeroMemory(&pEntry, sizeof(PROCESSENTRY32));
		pEntry.dwSize = sizeof(PROCESSENTRY32);
		HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
		if (Process32First(hSnapshot, &pEntry))
		{
			do
			{
				if (strcmp(pEntry.szExeFile, exeName) == 0)
				{
					pid = pEntry.th32ProcessID;
					hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
					CloseHandle(hSnapshot);
					if (!hProcess) return false;
					return true;
				}
			} while (Process32Next(hSnapshot, &pEntry));
		}
		return false;
	}

	MODULE getModule(const char * moduleName)
	{

		MODULEENTRY32 mEntry;
		ZeroMemory(&mEntry, sizeof(MODULEENTRY32));
		HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE32 | TH32CS_SNAPMODULE, pid);
		if (Module32First(hSnapshot, &mEntry))
		{
			do
			{
				if (strcmp(mEntry.szModule, moduleName) == 0)
				{
					return {(DWORD)mEntry.modBaseAddr, mEntry.modBaseSize};
				}
			} while (Module32Next(hSnapshot, &mEntry));
		}
		return {0x0, 0x0};
	}
}