// Source: https://www.geeksforgeeks.org/a-product-array-puzzle/

#include <stdio.h>
#include <stdlib.h>

/* Function to print product array
for a given array arr[] of size n */
void productArray(int arr[], int n)
{

	// Base case
	if (n == 1) {
		printf("0");
		return;
	}

	/* Allocate memory for temporary
arrays left[] and right[] */
	int* left = (int*)malloc(sizeof(int) * n);
	int* right = (int*)malloc(sizeof(int) * n);

	/* Allocate memory for the product array */
	int* prod = (int*)malloc(sizeof(int) * n);

	int i, j;

	/* Left most element of left array
is always 1 */
	left[0] = 1;

	/* Right most element of right
array is always 1 */
	right[n - 1] = 1;

	/* Construct the left array */
	for (i = 1; i < n; i++)
		left[i] = arr[i - 1] * left[i - 1];

	/* Construct the right array */
	for (j = n - 2; j >= 0; j--)
		right[j] = arr[j + 1] * right[j + 1];

	/* Construct the product array using
	left[] and right[] */
	for (i = 0; i < n; i++)
		prod[i] = left[i] * right[i];

	/* print the constructed prod array */
	for (i = 0; i < n; i++)
		printf("%d ", prod[i]);

	return;
}

/* Driver program to test above functions */
int main()
{
	int arr[] = { 10, 3, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("The product array is: \n");
	productArray(arr, n);
	getchar();
}
