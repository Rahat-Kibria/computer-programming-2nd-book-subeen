// Run this program via terminal
// gcc path/to/file.c -o sum.out
// sum.out 5 7 (for windows)
// ./sum.out 5 7 (for mac/linux)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n1, n2, sum;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	sum = n1 + n2;

	printf("%d + %d = %d\n", n1, n2, sum);

	return 0;
}
