#include <stdio.h>

void main()
{
	int hap=0;
	int i;

	i=1; //초기값을 지정
	while ( i <= 10) {
		hap = hap + i;
		i++;
	}

	printf(" 1에서 10까지의 합: %d \n", hap);
}
