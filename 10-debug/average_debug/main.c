// File > New > Project > Console Application > ...
// Debug > Run to cursor
// Debug > Debugging windows > Watches
// Debug > Next Line
// Debug > Debugging windows > Call stack (for functions)
// Debug > Step into (where there's function in a line in main())
// Debug > Toggle breakpoint (for specific line debugging)

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	int s = a + b;
	return s;
}

int main()
{
	int *array, length, i, sum = 0;

    printf("Enter number of integers: ");
    scanf("%d", &length);
    array = (int *) malloc(sizeof(int) *length);

    for (i = 0; i < length; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &array[i]);
		sum = add(sum, array[i]);
    }

    printf("The average is %lf\n", (double)sum / length);

    return 0;
}
