// use qsort to sort array and then use bsearch to search an item
#include <stdio.h>
#include <stdlib.h>

int compareFunc(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	int i, key, *item, n = 5;
	int values[] = {8, 6, 9, 3, 1};

	qsort(values, 5, sizeof(int), compareFunc);

	while(1) {
		printf("Enter the value of the key (0 to exit): ");
		scanf("%d", &key);
		if (key == 0) {
			break;
		}

		item = (int *) bsearch(&key, values, n, sizeof(int), compareFunc);

		if (item != NULL) {
			printf("Item found: %d\n", *item);
		}
		else {
			printf("Item not found in array\n");
		}
	}

	return 0;
}
