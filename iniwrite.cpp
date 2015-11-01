#include "iniwrite.h"
#include <iostream>
#include <Windows.h> 

CiniWrite::CiniWrite(char* szFileName)
{
	memset(m_szFileName, 0x00, 255);
	memcpy(m_szFileName, szFileName, strlen(szFileName));
}

void CiniWrite::WriteString(char* szSection, char* szKey, char* szValue)
{
	WritePrivateProfileString(szSection, szKey, szValue, m_szFileName);
}

void CiniWrite::WriteInteger(char* szSection, char* szKey, int iValue)
{
	char szValue[255];
	sprintf_s(szValue, "%d", iValue);
	WritePrivateProfileString(szSection, szKey, szValue, m_szFileName);
}

void CiniWrite::WriteFloat(char* szSection, char* szKey, float fltValue)
{
	char szValue[255];
	sprintf_s(szValue, "%f", fltValue);
	WritePrivateProfileString(szSection, szKey, szValue, m_szFileName);
}



