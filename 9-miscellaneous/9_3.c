#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)
#define SWAP(a, b) { \
	a ^= b; \
	b ^= a; \
	a ^= b; \
}

int main()
{
	int a = 83, b = 232;
	double d1 = 8.4332, d2 = 3.333322;

	printf("Maximum of %d and %d is %d\n", a, b, MAX(a, b));
	printf("Maximum of %lf and %lf is %lf\n", d1, d2, MAX(d1, d2));

	SWAP(a, b);
	printf("SWAP\n");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
