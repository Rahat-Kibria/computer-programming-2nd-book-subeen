#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("3_7_in.txt", "r");
	if (fp == NULL) {
		perror("Can't open file");
		return EXIT_FAILURE;
	}

	int ch;

	ch = fgetc(fp);
	printf("%c\n", (char)ch);
	ch = fgetc(fp);
	printf("%c\n", (char)ch);

//	fseek(fp, 0, 0);
	// 1st 0 means after how many characters and 2nd 0 indicates position
//	fseek(fp, 0, SEEK_SET);
	fseek(fp, sizeof(char) * 3, SEEK_CUR);
//	fseek(fp, 0, SEEK_END);
	ch = fgetc(fp);
	printf("%c\n", (char)ch);

	fclose(fp);

	return 0;
}
