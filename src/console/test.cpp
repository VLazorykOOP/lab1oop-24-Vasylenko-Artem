#include <iostream>

#include "../includes/console.h"

void clearConsole()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}