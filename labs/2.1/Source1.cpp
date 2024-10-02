// Done by: Kaznienko Viktoria
// 123
// Variant 7

#include<iostream>
int main() {

	int arr[12];

	for (int i = 0; i < 12; i++) // Iterating over values from 0 to 11 (12 not included)
	{
		if (i % 2 == 0) // Checking if the index i is even
		{
			arr[i] = 2 * i + 4;
		}
		else // Checking if the index i is odd
		{
			arr[i] = 7 * i - 3;
		}
	}

	int size = 12;
	for (int i = 0; i < size - 1; i++) // Determining the number of passes through the array, for 12 elements, the number of passes will be 11
	{
		for (int j = 0; j < size - i - 1; j++) // Iterating over the elements in the array
		{
			if (arr[j] > arr[j + 1]) // If the left element is greater than the right, swap them
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	return 0;
}
