#include <iostream>
#include <vector>

#include "./includes/tasks.h"
#include "./includes/console.h"

using namespace std;

void showMenuTask();
void chooseTask();

int main()
{
	chooseTask();
	return 0;
}

// void task1()
// {
// 	int size = sizeArray();
// 	vector<int> array = inputArray(size);

// 	int maxNegative = array[0];
// 	int maxNegativeIndex = 0;

// 	for (int i = 0; i < size; i++)
// 		if (array[i] < 0 && array[i] > maxNegative)
// 		{
// 			maxNegative = array[i];
// 			maxNegativeIndex = i;
// 		}

// 	if (maxNegative < 0)
// 		cout << "Maximum negative element: " << maxNegative << " at index " << maxNegativeIndex << endl;
// 	else
// 		cout << "No negative elements in the array." << endl;
// }

void task2()
{
}

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
			task2();
			break;
		case '3':
			cout << "Task 3 selected\n";
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
			return;
		cin.ignore();
	}
}

// int InputSizeArray()
// {
// 	clearConsole();
// 	int size = 0;
// 	while (size <= 0)
// 	{
// 		cout << "Enter the size of the array:";
// 		cin >> size;
// 		clearConsole();
// 		cout << "Size must be a positive number." << endl;
// 	}
// 	return size;
// }

// vector<int> inputElementsOfArray(int size)
// {
// 	vector<int> array(size);
// 	cout << "Enter " << size << " elements: ";
// 	for (int i = 0; i < size; i++)
// 		cin >> array[i];

// 	return array;
// }