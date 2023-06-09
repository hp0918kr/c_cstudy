#include <stdio.h>

void main()
{

	int a, b, c; 

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d" , &a, &b, &c );

	switch (b)
	{
		case '+' :
			printf ("%d + %d = %d 입니다.\n", a, c, a+c); 
			break;
		case '-' :
			printf ("%d - %d = %d 입니다.\n", a, c, a-c);
		       	break;
		case '*' :
			printf ("%d * %d = %d 입니다.\n", a, c, a*c);
		       	break;
		case '/' :
			printf ("%d / %d = %d 입니다.\n", a, c, a/c);
		       	break;
		case '%' :
			printf ("%d %% %d = %d 입니다.\n", a, c, a%c); 
			break;
		default :
			printf("연산자를 잘못 입력했습니다.");
	
	}
}

