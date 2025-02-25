#include <_stdio.h>
#pragma once

void clearConsole();
void showMenuTask();
void chooseTask();

void clearConsole()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}