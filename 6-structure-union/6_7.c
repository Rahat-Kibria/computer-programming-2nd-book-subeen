#include <stdio.h>
#include <string.h>

typedef struct {
	char first[20];
	char last[20];
} nameType;

typedef struct {
	int id;
	nameType name;
	char grade[2];
} studentType;

void calculate_grade(studentType *s, int mark)
{
	if (mark >= 80) {
		strcpy(s->grade, "A+");
	}
	else if (mark >= 70) {
		strcpy(s->grade, "A");
	}
	else if (mark >= 60) {
		strcpy(s->grade, "A-");
	}
	else if (mark >= 50) {
		strcpy(s->grade, "B");
	}
	else if (mark >= 40) {
		strcpy(s->grade, "C");
	}
	else {
		strcpy(s->grade, "F");
	}
}

int main()
{
	studentType student[3];
	int i, n = 3;
	int marks[3] = {72, 82, 60};

	for (i = 0; i < n; i++) {
		printf("Enter the ID for student %d: ", i + 1);
		scanf("%d", &student[i].id);
		printf("Enter the first name for student %d: ", i + 1);
		scanf("%s", student[i].name.first);
		printf("Enter the last name for student %d: ", i + 1);
		scanf("%s", student[i].name.last);

		calculate_grade(&student[i], marks[i]);
	}

	printf("\nOutput:\n");

	for (i = 0; i < n; i++) {
		printf("Student %d ID: %d\n", i + 1, student[i].id);
		printf("Student %d Name: %s %s\n", i + 1, student[i].name.first, student[i].name.last);
		printf("Student %d Grade: %s\n", i + 1, student[i].grade);
	}

	return 0;
}
