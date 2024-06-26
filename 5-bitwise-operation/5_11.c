#include <stdio.h>

int main()
{
	int n, m;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &n, &m);

	if (n ^ m) {
		puts("Numbers are not equal\n");
	}
	else {
		puts("Numbers are equal\n");
	}

	return 0;
}
