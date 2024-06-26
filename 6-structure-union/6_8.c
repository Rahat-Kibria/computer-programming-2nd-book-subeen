#include <stdio.h>

void pass_by_val(int a)
{
	a = a + 10;
}

void pass_by_ref(int *a)
{
	*a = *a + 10;
}

int main()
{
	int a;

	a = 5;

	pass_by_val(a);

	printf("a = %d\n", a);

	pass_by_ref(&a);

	printf("a = %d\n", a);

	return 0;
}
