#include <stdio.h>

void main()
{

	int a, b, c; 

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d" , &a, &b, &c );

	switch (b)
	{
		case '+' :
			printf ("%d + %d = %d �Դϴ�.\n", a, c, a+c); 
			break;
		case '-' :
			printf ("%d - %d = %d �Դϴ�.\n", a, c, a-c);
		       	break;
		case '*' :
			printf ("%d * %d = %d �Դϴ�.\n", a, c, a*c);
		       	break;
		case '/' :
			printf ("%d / %d = %d �Դϴ�.\n", a, c, a/c);
		       	break;
		case '%' :
			printf ("%d %% %d = %d �Դϴ�.\n", a, c, a%c); 
			break;
		default :
			printf("�����ڸ� �߸� �Է��߽��ϴ�.");
	
	}
}

