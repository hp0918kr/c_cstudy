#include <stdio.h>

void main()
{
	int st, ed;
	int a;
	int hap = 0;
	int i;

	printf("�հ��� ���۰� ==> ");
	scanf("%d", &st);

	printf("�հ��� ���� ==> ");
	scanf("%d", &ed);

	printf("��� ==> ");
	scanf("%d", &a);
	
	i=st;
	
	while (i <= ed){
		if ( i % a == 0){
			hap += i;
	  		i++;	
	       	}else{
		       	i++;
		}	
	}
	printf("%d���� %d������ %d����� �հ� ==> %d", st, ed, a, hap);
}
