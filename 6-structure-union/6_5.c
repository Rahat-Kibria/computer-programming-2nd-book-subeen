#include <stdio.h>

struct nameType {
	char first[20];
	char last[20];
};

struct studentType {
	int id;
	struct nameType name;
};

int main()
{
	struct studentType student[5];
	int i, n = 5;

	for (i = 0; i < n; i++) {
		printf("Enter the id for student %d: ", i + 1);
		scanf("%d", &student[i].id);
		printf("Enter the first name for student %d: ", i + 1);
		scanf("%s", student[i].name.first);
		printf("Enter the last name for student %d: ", i + 1);
		scanf("%s", student[i].name.last);
	}
	printf("\nOutput:\n\n");
	for (i = 0; i < n; i++) {
		printf("Student %d ID: %d\n", i + 1, student[i].id);
		printf("Student %d Name: %s %s\n", i + 1, student[i].name.first, student[i].name.last);
	}
	return 0;
}
