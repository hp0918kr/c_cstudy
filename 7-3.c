#include <stdio.h>

void main()
{
	int a,b;

	while ( 1 ) //���ѷ����� ����� �ڵ�
	{
		printf ( "���� �� �� �Է� (���߷��� Ctrl+C) : ");

		scanf("%d %d", &a, &b); //�Է°��� �������� �и�
		
		printf("%d + %d = %d \n", a, b, a+b); //����� ���
	}
}
