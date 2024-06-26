#include <stdio.h>

struct s1 {
	char c1, c2, c3;
	int n;
	double d;
};

struct s2 {
	char c1;
	int n;
	char c2;
	double d;
	char c3, c4;
};

int main()
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("double size: %lu bytes\n", sizeof(double));

	printf("s1 size: %lu bytes\n", sizeof(struct s1));
	printf("s2 size: %lu bytes\n", sizeof(struct s2));

	return 0;
}
