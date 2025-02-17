// Source; https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/

// A C program to find a peak element
#include <stdio.h>

// Find the peak element in the array
int findPeak(int arr[], int n)
{
	// first or last element is peak element
	if (n == 1)
		return 0;
	if (arr[0] >= arr[1])
		return 0;
	if (arr[n - 1] >= arr[n - 2])
		return n - 1;

	// check for every other element
	for (int i = 1; i < n - 1; i++) {

		// check if the neighbors are smaller
		if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			return i;
	}
}

// Driver Code
int main()
{
	int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Index of a peak point is %d",findPeak(arr, n));
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
