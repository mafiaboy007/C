#include <stdio.h>

void doYouHaveMoney();

int main() {
	
	doYouHaveMoney();
	return 0;
}

void doYouHaveMoney() {
	int answer;
	printf("THis item is 5000 dollars, how much money u have : ");
	scanf("%d", &answer);
	if (answer > 5000) {
		printf("Congratulations !! its been nice having a buisness with ya !\n");
	} else if (answer < 5000){
		printf("I will give it to ya for free :)\n");
	}
}

