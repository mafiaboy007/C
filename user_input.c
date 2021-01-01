#include <stdio.h>

int main() {
	
	char name[10];
	int age;
	printf("Enter ur age and i will tell u how old u'll be after 250 years ! : ");
	scanf("%d", &age);
	printf("ENter your name : ");
	scanf("%s", name);
	printf("%s, your age will be %d\n", name , age + 250);
	


	return 0;
}
