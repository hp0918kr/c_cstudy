#include <stdio.h>

void main()
{

	int a, b;
	
	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);
	
	if(a == 1)
	{
		printf("�� �Է� : ");
		scanf("%d", &b);
	

	printf("10���� ==> %d \n", b);
	printf("16���� ==> %X \n", b);
	printf("8���� ==> %o \n", b);
	}

	if(a == 2)
	{
		printf("�� �Է� : ");
		scanf("%X", &b);

		printf("10���� ==> %d \n", b);
		printf("16���� ==> %X \n", b);
		printf("8���� ==> %o \n", b);
	}

	if(a == 3)
	{
		printf("�� �Է� : ");
		scanf("%O", &b);

		printf("10���� ==> %d \n", b);
		printf("16���� ==> %X \n", b);
		printf("8���� ==> %o \n", b);
	}
}



