#include <stdio.h>

typedef struct {
	char firstName[30];
	char lastName[30];
} fullName;

typedef struct {
	char firstName[30];
	char lastName[30];
} fatherName;

typedef struct {
	char firstName[30];
	char lastName[30];
} motherName;

typedef struct {
	int day;
	int month;
	int year;
} dateOfBirth;

typedef struct {
	fullName fun;
	fatherName fan;
	motherName mn;
	dateOfBirth dob;
	char idNo[15];
} nidCard;

int main()
{
	nidCard nc;

	printf("Enter your first name: ");
	scanf("%s", nc.fun.firstName);
	printf("Enter your last name: ");
	scanf("%s", nc.fun.lastName);
	printf("Enter your father\'s first name: ");
	scanf("%s", nc.fan.firstName);
	printf("Enter your father\'s last name: ");
	scanf("%s", nc.fan.lastName);
	printf("Enter your mother\'s first name: ");
	scanf("%s", nc.mn.firstName);
	printf("Enter your mother\'s last name: ");
	scanf("%s", nc.mn.lastName);
	printf("Enter the day of your birth: ");
	scanf("%d", &nc.dob.day);
	printf("Enter the month of your birth: ");
	scanf("%d", &nc.dob.month);
	printf("Enter the year of your birth: ");
	scanf("%d", &nc.dob.year);
	printf("Enter your id no: ");
	scanf("%s", nc.idNo);

	printf("\nOutput\n");
	printf("Name: %s %s\n", nc.fun.firstName, nc.fun.lastName);
	printf("Father\'s Name: %s %s\n", nc.fan.firstName, nc.fan.lastName);
	printf("Mother\'s Name: %s %s\n", nc.mn.firstName, nc.mn.lastName);
	printf("Date of Birth: %d/%d/%d\n", nc.dob.day, nc.dob.month, nc.dob.year);
	printf("ID No: %s\n", nc.idNo);

	return 0;
}
