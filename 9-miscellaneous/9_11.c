// Run this program in the terminal
// gcc path/to/file.c -o prog.out
// prog.out (for windows)
// ./prog.out (for mac/linux)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("Argument count: %d\n", argc);
	printf("First argument: %d\n", argv[0]);

	return 0;
}
