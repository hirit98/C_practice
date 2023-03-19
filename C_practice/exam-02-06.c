#include <stdio.h>
#define LENGTH 10

//심볼릭,매크로 상수
int main(void) {
	
	//심볼릭 상수
	const int NUMBER = 5;
	int number = 3;
	number = 10;

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);


	return 0;
}