#include <stdio.h>

int main() {

	double x;
	double y;
	printf("Enter the first number: ");
	scanf("%lf", &x);
	printf("Enter the second number: ");
	scanf("%lf", &y);

	printf("The sum of these numbers is: %f \n", x + y);
	return 0;
}
