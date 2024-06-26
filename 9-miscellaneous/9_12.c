// Run this program in a terminal
// gcc path/to/file.c -o prog.out
// prog.out "Rahat Kibria" (for windows)
// ./prog.out "Rahat Kibria" (for mac/linux)
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Please enter one argument (your name)\n");
		return 1;
	}
	printf("Welcome %s\n", argv[1]);

	return 0;
}
