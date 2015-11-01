#include "iniread.h"
#include <iostream>
#include <Windows.h>

CiniRead::CiniRead(char* szFileName)
{
	memset(m_szFileName, 0x00, 255);
	memcpy(m_szFileName, szFileName, strlen(szFileName));
}

char* CiniRead::ReadString(char* szSection, char* szKey, const char* szDefaultValue)
{
	char* szResult = new char[255];
	memset(szResult, 0x00, 255);
	GetPrivateProfileString(szSection, szKey, szDefaultValue, szResult, 255, m_szFileName);
	return szResult;
}

int CiniRead::ReadInteger(char* szSection, char* szKey, int iDefaultValue)
{
	int iResult = GetPrivateProfileInt(szSection, szKey, iDefaultValue, m_szFileName);
	return iResult;
}

float CiniRead::ReadFloat(char* szSection, char* szKey, float fltDefaultValue)
{
	char szResult[255];
	char szDefault[255];
	float fltResult;
	sprintf_s(szDefault, "%f", fltDefaultValue);
	GetPrivateProfileString(szSection, szKey, szDefault, szResult, 255, m_szFileName);
	fltResult = atof(szResult);
	return fltResult;
}
