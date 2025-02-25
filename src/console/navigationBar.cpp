#include <iostream>

#include "../includes/console.h"
#include "../includes/tasks.h"

using namespace std;

void showMenuTask()
{
	cout << "1.  Task 1\n";
	cout << "2.  Task 2\n";
	cout << "3.  Task 3\n";
	cout << "Choose a task:";
}

void chooseTask()
{
	char ch;
	while (true)
	{
		clearConsole();
		showMenuTask();
		ch = cin.get();
		cin.ignore();
		switch (ch)
		{
		case '1':
			cout << "Task 1 selected\n";
			task_01();
			break;
		case '2':
			cout << "Task 2 selected\n";
			task_02();
			break;
		case '3':
			cout << "Task 3 selected\n";
			task_03();
			break;
		case 'q':
			return;
		default:
			cout << "Invalid choice. Please try again.\n";
			break;
		}
		cout << "Press any key to continue or 'q' to exit...";
		cin >> ch;
		if (ch == 'q')
		{
			clearConsole();
			cout << "\nGoodbye!\n\n";
			return;
		}
		cin.ignore();
	}
}