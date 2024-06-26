#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp_in;
	char *input_file = "3_8_in.jpg";

	fp_in = fopen(input_file, "r");
	if (fp_in == NULL) {
		perror("File opening failed.");
		return EXIT_FAILURE;
	}

	fseek(fp_in, 0, SEEK_END);

	printf("File size (Bytes): %ld B\n", ftell(fp_in));
	printf("File size (Kilobytes): %ld KB\n", ftell(fp_in)/1024);

	fclose(fp_in);
	return 0;
}
