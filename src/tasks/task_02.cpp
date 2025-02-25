#include <iostream>

#include "../includes/tasks.h"
#include "../includes/array.h"

// Знайти мінімальне значення серед елементів, менших заданого числа max, і розташованих до першого елемента, більшого заданого числа min.

using namespace std;

void task_02()
{
	int size = InputSizeArray();
	vector<int> array = inputElementsOfArray(size);

	int min, max;

	cout << "Enter the value of min: ";
	cin >> min;
	cout << "Enter the value of max: ";
	cin >> max;

	int minElement = array[0];
	int minElementIndex = -1;

	for (int i = 0; i < size; i++)
		if (array[i] < max && array[i] > min && array[i] < minElement)
		{
			minElement = array[i];
			minElementIndex = i;
		}

	if (minElementIndex != -1)
		cout << "Minimum element: " << minElement << " at index " << minElementIndex << endl;
	else
		cout << "No elements in the array that meet the conditions." << endl;
}