#include <stdio.h>
#include "8_3_dimik.h"

int main()
{
	int n1 = 10, n2 = 5;

	printf("%d + %d = %d\n", n1, n2, add(n1, n2));
	printf("%d x %d = %d\n", n1, n2, mul(n1, n2));

	return 0;
}
