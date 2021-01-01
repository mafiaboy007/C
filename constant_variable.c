#include <stdio.h>

int main() {

	/* variable i can change --> */
	int i = 10;
	printf("%d \n", i);
	i = 20;
	printf("%d \n", i);

	/* now if we try to change the variable x, the compiler will throw an error at us /: */

	const char x[] = "hello";
	printf("%s \n", x);


	return 0;
}
