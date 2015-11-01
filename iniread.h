#pragma once

class CiniRead
{
public:
	/**
	*       \brief Constructor
	*/
	CiniRead(char* szFileName);

	/**
	*       \dispaly name
	*/
	char* ReadString(char* szSection, char* szKey, const char* szDefaultValue);

	/**
	*       \display age
	*/
	int ReadInteger(char* szSection, char* szKey, int iDefaultValue);

	/**
	*       \display height
	*/
	float ReadFloat(char* szSection, char* szKey, float fltDefaultValue);
private:
	char m_szFileName[255];
};

