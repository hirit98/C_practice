#include <stdio.h>

int main(void) {

	int a = 10, b = 10;

	printf("a: %d\n", a);
	printf("a: %d\n", ++a); //���� ���� ������(prefix)
	printf("a: %d\n\n", a);

	printf("b: %d\n", b);
	printf("b: %d\n", b++); //���� ���� ������(postfix)
	printf("b: %d\n", b);

	return 0;
}