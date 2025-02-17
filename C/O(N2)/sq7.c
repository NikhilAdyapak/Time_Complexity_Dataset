// C program to Find another array such that the hamming
// distance from the original array is maximum
#include <stdio.h>
 
// Find maximum between two numbers.
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
 
// Return the maximum hamming distance of a rotation
int maxHamming(int arr[], int n)
{
    // arr[] to brr[] two times so that
    // we can traverse through all rotations.
    int brr[2 * n + 1];
    for (int i = 0; i < n; i++) {
        brr[i] = arr[i];
        brr[n + i] = arr[i];
    }
 
    // We know hamming distance with 0 rotation would be 0.
    int maxHam = 0;
 
    // We try other rotations one by one and compute
    // Hamming distance of every rotation
    for (int i = 1; i < n; i++) {
        int currHam = 0;
        for (int j = i, k = 0; j < (i + n); j++, k++)
            if (brr[j] != arr[k])
                currHam++;
 
        // We can never get more than n.
        if (currHam == n)
            return n;
 
        maxHam = max(maxHam, currHam);
    }
 
    return maxHam;
}
 
// Driver program
int main()
{
    int arr[] = { 2, 4, 6, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", maxHamming(arr, n));
    return 0;
}
 
// This code is contributed by Aditya Kumar (adityakumar129)