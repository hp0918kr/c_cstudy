#include <stdio.h>

void main()
{
	int st, ed;
	int a;
	int hap = 0;
	int i;

	printf("합계의 시작값 ==> ");
	scanf("%d", &st);

	printf("합계의 끝값 ==> ");
	scanf("%d", &ed);

	printf("배수 ==> ");
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
	printf("%d부터 %d까지의 %d배수의 합계 ==> %d", st, ed, a, hap);
}
