#include <stdio.h>

double power(int z); /*U CAN MAKE THE FUNCTION ABOVE THE MAIN FUNCTION OR JUST WRITE IT'S SIGNATURE LIKE IN THIS LINE*/

int sum(int x, int y) {  /*ABOVE THE MAIN FUNCTION*/
	return x + y;
}

int main() {
	
	printf("%d \n",sum(5,6));
	printf("%f, \n", power(5));
	return 0;
}

double power(int z) {  /*BELOW THE MAIN FUNCTION*/
	return z * z * z;
}
