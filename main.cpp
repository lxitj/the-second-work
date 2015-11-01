#include "iostream"
#include "iniwrite.h"
#include "iniread.h"
#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char * argv[])
{
	CiniWrite iniWrite("C:\\Users\\luxiang\\Desktop\\text.ini");
	iniWrite.WriteString("Section 1", "Name", "LuXiang");
	iniWrite.WriteInteger("Section 1", "Age", 18);
	iniWrite.WriteFloat("Section 1", "Height", 1.75f);
	iniWrite.WriteString("Section 2", "Name", "TiaoTiao");
	iniWrite.WriteInteger("Section 2", "Age", 18);
	iniWrite.WriteFloat("Section 2", "Height", 1.68f);

	CiniRead iniread("C:\\Users\\luxiang\\Desktop\\text.ini");
	char *szName = iniread.ReadString("Section 1", "Name", "OOXX");
	int iAge = iniread.ReadInteger("Section 1", "Age", 25);
	float fltHeight = iniread.ReadFloat("Section 1", "Height", 1.80f);

	std::cout << "Name=" << szName << std::endl
		<< "Age=" << iAge << std::endl
		<< "Height=" << fltHeight << std::endl;

	delete szName;
	system ("pause");
}
