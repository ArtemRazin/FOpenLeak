// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <string>
#include <iostream>
#include <cassert>

int main()
{
	FILE* file;

#if 0
	for (int i = 0; i < 10000; i++)
	{
		fopen_s(&file, (std::to_string(i) + ".tmp").c_str(), "w");
		fclose(file);
	}
#endif

	fopen_s(&file, "1.tmp", "w");
	assert(file);

	fclose(file);

    return 0;
}
