#include <iostream>

#include "../includes/console.h"

using namespace std;

void clearConsole()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void pauseConsole()
{
	cout << "\nPress any key to continue...\n";
	getchar();
	getchar();
	clearConsole();
}