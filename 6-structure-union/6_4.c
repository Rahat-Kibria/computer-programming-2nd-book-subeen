#include <stdio.h>
#include <string.h>

struct student {
	int id;
	char name[40];
};

int main()
{
	struct student one;
	int ch;
	printf("Enter your id: ");
	scanf("%d", &one.id);
	printf("Enter your name: ");
	while((ch = getchar()) != '\n' && ch != EOF);
	//	https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1352443831&id=1043284392
	fgets(one.name, 40, stdin);
	// https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
	// one.name[strcspn(one.name, "\n")] = 0;

	printf("ID: %d\n", one.id);
	printf("Name: %s\n", one.name);

	return 0;
}
