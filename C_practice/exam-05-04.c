#include <stdio.h>

int main(void) {

	int a = 10, b = 10;

	printf("a: %d\n", a);
	printf("a: %d\n", ++a); //전위 증가 연산자(prefix)
	printf("a: %d\n\n", a);

	printf("b: %d\n", b);
	printf("b: %d\n", b++); //후위 증가 연산자(postfix)
	printf("b: %d\n", b);

	return 0;
}