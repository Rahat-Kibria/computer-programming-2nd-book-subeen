#include <stdio.h>

//enum COLOR {RED, GREEN, BLUE};
enum COLOR {RED = 1, GREEN = 2, BLUE = 3};

int main()
{
	enum COLOR selected_color;

	int num;

	printf("Enter 1 for RED, 2 for GREEN, 3 for BLUE: ");
	scanf("%d", &num);

	if (num == 1) {
		selected_color = RED;
	}
	else if (num == 2) {
		selected_color = GREEN;
	}
	else if (num == 3) {
		selected_color = BLUE;
	}

	printf("Selected Color: %d\n", selected_color);

	return 0;
}
