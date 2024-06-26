#include <stdio.h>
int main()
{
	FILE *fp_math, *fp_english, *fp_bangla, *fp_out;
	char *math_fileName = "3_5_ex_math.txt";
	char *english_fileName = "3_5_ex_english.txt";
	char *bangla_fileName = "3_5_ex_bangla.txt";
	char *output_fileName = "3_5_ex_out.txt";
	char math_input[50], english_input[50], bangla_input[50];
	int math_roll[10], english_roll[10], bangla_roll[10];
	double math_num[10], english_num[10], bangla_num[10], average[10];

	fp_math = fopen(math_fileName, "r");
	fp_english = fopen(english_fileName, "r");
	fp_bangla = fopen(bangla_fileName, "r");
	fp_out = fopen(output_fileName, "a");

	for (int i = 0; i < 10; i++) {
		fgets(math_input, 50, fp_math);
		sscanf(math_input, "%d %lf", &math_roll[i], &math_num[i]);
	}

	for (int i = 0; i < 10; i++) {
		fgets(english_input, 50, fp_english);
		sscanf(english_input, "%d %lf", &english_roll[i], &english_num[i]);
	}

	for (int i = 0; i < 10; i++) {
		fgets(bangla_input, 50, fp_bangla);
		sscanf(bangla_input, "%d %lf", &bangla_roll[i], &bangla_num[i]);
	}

	for (int i = 0; i < 10; i++) {
		average[i] = (math_num[i] + english_num[i] + bangla_num[i]) / 3.0;
	}

	for (int i = 0; i < 10; i++) {
		fprintf(fp_out, "%d %.2lf\n", bangla_roll[i], average[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d %.2lf\n", bangla_roll[i], average[i]);
	}

	fclose(fp_math);
	fclose(fp_english);
	fclose(fp_bangla);
	fclose(fp_out);

	return 0;
}
