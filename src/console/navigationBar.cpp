#include <iostream>

#include "../includes/console.h"
#include "../includes/tasks.h"

using namespace std;

bool checkChoiceInput(char ch, const vector<char> &validChoices)
{
	for (char validCh : validChoices)
		if (ch == validCh)
			return true;

	return false;
}

void newLine()
{
	cout << "\n";
}

void showMenuTask()
{
	cout << "Tasks:";
	cout << "\n1 - Task 1";
	cout << "\n2 - Task 2";
	cout << "\n3 - Task 3";
	newLine();
	cout << "\nq - Quit";
	newLine();
	cout << "\nYour choice: ";
}

void chooseTask()
{
	clearConsole();
	char ch;
	vector<char> validChoices = {'1', '2', '3', 'q'};

	while (true)
	{
		showMenuTask();
		cin >> ch;
		bool selected = checkChoiceInput(ch, validChoices);

		if (!selected)
		{
			clearConsole();
			cout << "Invalid choice. Please try again.\n";
			pauseConsole();
			continue;
		}

		switch (ch)
		{
		case '1':
			clearConsole();
			cout << "Task 1 selected\n";
			task_01();
			break;
		case '2':
			clearConsole();
			cout << "Task 2 selected\n";
			task_02();
			break;
		case '3':
			clearConsole();
			cout << "Task 3 selected\n";
			task_03();
			break;
		case 'q':
			clearConsole();
			cout << "\nGoodbye!\n\n";
			return;
		}

		pauseConsole();
	}
}
