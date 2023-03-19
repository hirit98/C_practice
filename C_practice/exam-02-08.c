#include <stdio.h>

//명시적 형 변환
int main(void) {

	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%.1f\n", (double)10);
	printf("%.2f\n", (float)10);

	return 0;
}