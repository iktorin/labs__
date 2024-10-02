// Done by: Kaznienko Viktoria
// 123
// Variant 7

#include<iostream>
int main() {

	int arr1[10];
	int arr2[10];
	int arr3[10];

	// Filling the first array
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 95 - 3 * i;
	}

	// Filling the second array
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = 74 + 3 * i;
	}

	// Initializing the third array with equal values from the first and second arrays
	int k = 0; // Number of equal values in the first and second arrays
	for (int i = 0; i < 10; i++) // Outer loop, iterating through the first array
	{
		for (int j = 0; j < 10; j++) // Inner loop, iterating through the second array
		{
			if (arr1[i] == arr2[j]) // Check if values in the first and second arrays are equal
			{
				arr3[k] = arr1[i]; // Assign the matching value to the third array
				k++; // Increment the count of equal values
				break; // Exit the inner loop
			}
		}
	}

	// Find the arithmetic mean of the elements less than 82 in the third array
	int average = 1; // Initial value for the arithmetic mean (starting value is set to 0)
	for (int i = 0; i < k; i++) // Iterate through the elements of the third array
	{
		if (arr3[i] < 82) // Check if the element's value is less than 82
		{
			average = (average + arr3[i]) / 2; // Update the arithmetic mean
		}
	}
}
