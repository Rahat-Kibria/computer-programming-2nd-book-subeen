#include <stdio.h>

int main()
{
	int return_value;
	char *filename = "3_9_in.jpg";

	return_value = remove(filename);

	if (return_value != 0) {
		perror("File Remove Failed!");
		return 1;
	}

	printf("%s removed successfully\n", filename);

	return_value = remove(filename);

	if (return_value != 0) {
		perror("File Remove Failed!");
		return 1;
	}

	printf("%s removed successfully\n", filename);
	return 0;
}
