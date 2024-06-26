#include <stdio.h>

int main()
{
	void *void_ptr;
	int n = 10;

	void_ptr = &n;

	printf("Address of n: %p\n", &n);
	printf("Value of void_ptr: %p\n", void_ptr);
	printf("Content of void_ptr: %d\n", *((int *)void_ptr));

	return 0;
}
