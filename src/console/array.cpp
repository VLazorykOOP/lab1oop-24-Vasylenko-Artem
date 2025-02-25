#include <iostream>
#include <vector>

#include "../includes/array.h"
#include "../includes/console.h"

using namespace std;

int InputSizeArray(int minSize)
{
	int inputSize = 0;
	while (inputSize <= minSize)
	{
		cout << "Enter the size of the array (greater than " << minSize << "): ";
		cin >> inputSize;

		if (inputSize > minSize)
			break;

		clearConsole();
		cout << "Size must be greater than " << minSize << endl;
	}
	clearConsole();
	return inputSize;
}

vector<int> inputElementsOfArray(int size)
{
	vector<int> array(size);
	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size; i++)
		cin >> array[i];

	return array;
}

int findMaxNegativeElement(const std::vector<int> &array)
{
	bool isNegative = false;
	int maxNegative = array[0];
	for (int i = 0; i < array.size(); i++)
		if (array[i] < 0 && array[i] > maxNegative)
		{
			isNegative = true;
			maxNegative = array[i];
		}
	return isNegative ? maxNegative : 0;
}
