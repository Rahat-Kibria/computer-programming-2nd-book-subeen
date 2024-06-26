#include <stdio.h>

int main()
{
	int input, shift_choice, bit_to_shift, result;
	while (1) {
		printf("Please enter your number (0 to exit): ");
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		printf("Left shift (Press 1) or right shift (Press 2)? ");
		scanf("%d", &shift_choice);
		if (shift_choice == 1) {
			printf("How many bits you want to shift left? ");
			scanf("%d", &bit_to_shift);

			result = input << bit_to_shift;
			printf("Result is %d\n", result);
		}
		else if (shift_choice == 2) {
			printf("How many bits you want to shift right? ");
			scanf("%d", &bit_to_shift);

			result = input >> bit_to_shift;
			printf("Result is %d\n", result);
		}
		else {
			printf("\nWrong choice. Try again.\n");
		}
	}

	return 0;
}
