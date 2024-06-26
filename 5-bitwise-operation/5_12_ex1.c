// https://takeuforward.org/arrays/find-the-missing-number-in-an-array/
// https://www.geeksforgeeks.org/find-the-missing-number/
#include <stdio.h>

int getMissingNo(int a[], int n)
{
    int i;

    // For xor of all the elements in given array
    int x1 = a[0];

    // For xor of all the elements from 1 to n+1
    int x2 = 1;

    for (i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 8};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	int miss = getMissingNo(arr, arr_size);
    printf("The missing number: %d\n", miss);

	return 0;
}

