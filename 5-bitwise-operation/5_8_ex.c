#include <stdio.h>
#include <string.h>

int main() {
    int decimal_num, binary_num = 0, i = 1, remainder, string_length, count = 0;
    char str[30];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }
	sprintf(str, "%d", binary_num);
	string_length = strlen(str);

    for (int j = 0; j < string_length; j++) {
		if (str[j] == '1') {
			count++;
		}
    }

    printf("Binary number: %s\n", str);
    printf("Length of string: %d\n", string_length);
    printf("Number of 1 in the binary is: %d\n", count);

    return 0;
}
