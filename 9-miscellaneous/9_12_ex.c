// Run this program in a terminal
// gcc path/to/file.c -o prog.out
// prog.out 2 3 4 (for windows)
// ./prog.out 2 3 4 (for mac/linux)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
//	if (argc != 2) {
//		printf("Please enter at least 2 numbers.\n");
//		return 1;
//	}
	for (int i = 1; atoi(argv[i]) != 0; i++) {
		sum = sum + atoi(argv[i]);
	}
	printf("Sum: %d\n", sum);

	return 0;
}
