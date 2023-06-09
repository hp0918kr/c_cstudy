#include <stdio.h>

void main()
{

	int a, b;
	
	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);
	
	if(a == 1)
	{
		printf("값 입력 : ");
		scanf("%d", &b);
	

	printf("10진수 ==> %d \n", b);
	printf("16진수 ==> %X \n", b);
	printf("8진수 ==> %o \n", b);
	}

	if(a == 2)
	{
		printf("값 입력 : ");
		scanf("%X", &b);

		printf("10진수 ==> %d \n", b);
		printf("16진수 ==> %X \n", b);
		printf("8진수 ==> %o \n", b);
	}

	if(a == 3)
	{
		printf("값 입력 : ");
		scanf("%O", &b);

		printf("10진수 ==> %d \n", b);
		printf("16진수 ==> %X \n", b);
		printf("8진수 ==> %o \n", b);
	}
}



