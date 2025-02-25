#include <iostream>
#include "../includes/tasks.h"
#include "../includes/array.h"

// Задано одновимірний масив А розміру N.Знайти серед всіх від’ємних максимальний елемент масиву та його індекс.

using namespace std;

void task_01()
{
	cout << "task_01" << endl;

	int size = InputSizeArray();
	vector<int> array = inputElementsOfArray(size);

	int maxNegative = array[0];
	int maxNegativeIndex = 0;

	for (int i = 0; i < size; i++)
		if (array[i] < 0 && array[i] > maxNegative)
		{
			maxNegative = array[i];
			maxNegativeIndex = i;
		}

	if (maxNegative < 0)
		cout << "Maximum negative element: " << maxNegative << " at index " << maxNegativeIndex << endl;
	else
		cout << "No negative elements in the array." << endl;
}