#include <stdio.h>

void main()
{
	int i;
	int dan;

	printf("�� ��?");
	scanf("%d", &dan);
	
	for (i = 1; i < 10; i++) {
		printf(" %d X %d = %d \n", dan, i, dan*i);
	}
}

