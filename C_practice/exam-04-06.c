#include <stdio.h>

int main(void) {

	/*char charater;
	int inum;
	float fnum;
	char* c1 = "abc";

	scanf_s("%c", &charater);
	scanf_s("%d", &inum);
	scanf_s("%f", &fnum);
	

	printf("charater: %c\ninum\t: %d\nfnum\t: %.3f\n", charater, inum, fnum);
	printf("%s", c1);*/

	char name[255];

	printf("이름이 무엇인가요 ? :");
	scanf_s("%s", name,sizeof(name));

	printf("반갑습니다. %s님!\n",name);

	return 0;
}