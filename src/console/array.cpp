#include <iostream>
#include <vector>

#include "../includes/array.h"
#include "../includes/console.h"

using namespace std;

int InputSizeArray()
{
	clearConsole();
	int size = 0;
	while (size <= 0)
	{
		cout << "Enter the size of the array: ";
		cin >> size;
		clearConsole();
		cout << "Size must be a positive number." << endl;
	}
	return size;
}

vector<int> inputElementsOfArray(int size)
{
	vector<int> array(size);
	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size; i++)
		cin >> array[i];

	return array;
}