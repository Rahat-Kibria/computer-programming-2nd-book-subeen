// https://www.youtube.com/watch?v=wCCzpvN3vZE
#include <stdio.h>

char to_upper(char ch)
{
//	return ch & 95;
	return ch & ~32;
}

char to_lower(char ch)
{
	return ch | 32;
}

char swap_case(char ch)
{
	return ch ^ 32;
}

int main()
{
	char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	for (int i = 0; i < 26; i++) {
		printf("Uppercase: %c, ", to_upper(str[i]));
		printf("Lowercase: %c, ", to_lower(str[i]));
		printf("Swapcase: %c\n", swap_case(str[i]));
	}
	return 0;
}
