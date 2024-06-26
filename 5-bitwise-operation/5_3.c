#include <stdio.h>

int main()
{
	int n1 = 5, n2 = 6, n3, n4, n5;

	n3 = n1 & n2;
	n4 = n1 | n2;
	n5 = n1 ^ n2;

	printf("%d & %d = %d\n", n1, n2, n3);
	printf("%d | %d = %d\n", n1, n2, n4);
	printf("%d ^ %d = %d\n", n1, n2, n5);

	return 0;
}
