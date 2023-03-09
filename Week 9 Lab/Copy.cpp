// This program illustrates how to copy one array to another.
#include <iostream>
using namespace std;

typedef int intArray[];

void display(const intArray temp, int size)
{
	for (int t = 0; t < size; t++)
		cout << temp[t] << ", ";
	cout << endl;
}

int main()
{
	const int SIZE = 6;
	// Showing 2 types of array declaration, one using typedef
	intArray arrayA = { 10, 20, 30, 40, 50, 60 };
	int arrayB[SIZE] = { 2,  4,  6,  8, 10, 12 };

	// Display the contents of the two arrays
	cout << "ArrayA:    ";
	display(arrayA, SIZE);
	cout << "ArrayB:    ";
	display(arrayB, SIZE);

	// Copy A to B using a range-based for loop
	int i = 0;
	for (int n : arrayA) {
		arrayB[i] = n;
		i++;
	}

	cout << "\nAfter copying A to B...\n\n" << "ArrayA:    ";
	display(arrayA, SIZE);
	cout << "ArrayB:    ";
	display(arrayB, SIZE);

	cout << endl;
	return 0;
}
