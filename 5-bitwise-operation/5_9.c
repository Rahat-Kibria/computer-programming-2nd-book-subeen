// How many bits of 1 in a binary number
#include <stdio.h>

int main()
{
	int decimal_input, count = 0, i;

	printf("Enter a decimal number: ");
	scanf("%d", &decimal_input);

	while (decimal_input) {
		if (decimal_input & 1) count++;
		decimal_input = decimal_input >> 1;
	}

	printf("Number of 1: %d\n", count);

	return 0;
}
