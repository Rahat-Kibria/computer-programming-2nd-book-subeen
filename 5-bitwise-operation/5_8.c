#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n > 0 && (n & (n - 1)) == 0) {
		printf("%d is the resulting value of a power of 2\n", n);
	}
	else {
		printf("%d is not the resulting value of a power of 2\n", n);
	}

	return 0;
}
