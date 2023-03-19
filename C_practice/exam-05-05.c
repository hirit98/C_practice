#include <stdio.h>

int main(void) {
	
	int num1 = 3;
	int num2 = 5;

	int result;

	result = num1++ + num2 * 3;
	printf("%d\n", result);

	result = num1-- + num2 * 3;
	printf("%d\n", result);

	return 0;
}