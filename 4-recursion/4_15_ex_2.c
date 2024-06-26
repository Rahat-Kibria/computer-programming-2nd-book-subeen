// string reverse
// https://www.youtube.com/watch?v=WYxAvXrr0eA
#include <stdio.h>

int f_calls = 0;

void stringRev(char str[], int i)
{
	f_calls = f_calls + 1;
	if (str[i] != '\0') {
		stringRev(str, i + 1);
		printf("%c", str[i]);
	}
}

int main()
{
	char str[30];
	fgets(str, 30, stdin);

	// remove trailing newline from fgets
	// str[strlen(str) - 1] = '\0';
	str[strcspn(str, "\n")] = 0;

	printf("Reversed String: ");
	stringRev(str, 0);

	printf("\nNumber of function calls: %d\n", f_calls);
	return 0;
}
