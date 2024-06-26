// Print all permutations of ten integer in an array
// https://www.codesdope.com/blog/article/generating-permutations-of-all-elements-of-an-arra/
#include <stdio.h>

void printarray(int arr[], int size)
{
    int i,j;
    for(i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(int *arr, int start, int end)
{
    if(start == end)
    {
        printarray(arr, end + 1);
        return;
    }
    int i;
    for(i = start; i <= end; i++)
    {
        swap((arr + i), (arr + start));
        //fixing one first digit and calling permutation on
        //the rest of the digits
        permutation(arr, start + 1, end);
        swap((arr + i), (arr + start));
    }
}

int main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    int i;
    int arr[size];
    printf("Enter the numbers\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("All possible permutations\n");
    permutation(arr, 0, size - 1);
    return 0;
}
