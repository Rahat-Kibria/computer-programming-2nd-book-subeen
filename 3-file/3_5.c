#include <stdio.h>
int main()
{
	FILE *fp_in, *fp_out;
	char *input_file = "3_5_in.txt";
	char *output_file = "3_5_out.txt";
	char line[80];
	int num1, num2, sum;

	fp_in = fopen(input_file, "r");
	fp_out = fopen(output_file, "w");

	fgets(line, 80, fp_in);
	printf("Line: %s\n", line);
	sscanf(line, "%d %d", &num1, &num2);

	sum = num1 + num2;
	printf("Sum = %d\n", sum);
	fprintf(fp_out, "%d\n", sum);

	fclose(fp_in);
	fclose(fp_out);

	return 0;
}
