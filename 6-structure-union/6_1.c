#include <stdio.h>
#include <string.h>

int main()
{
	struct student {
		int id;
//		char name[40];
		char *name;
	};

	struct student one;
	one.id = 1;
	one.name = "Rahat Kibria";
//	strcpy(one.name, "Rahat Kibria");
	printf("ID: %d\n", one.id);
	printf("Name: %s\n", one.name);

	return 0;
}
