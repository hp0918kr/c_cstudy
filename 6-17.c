#include <stdio.h>

void main()
{
	int j;

	for (j=2; j<10; j++)
	{
		printf("#��%d��#  ", j);
	}
	printf("\n");

	int i, k;
	
	for (i=1; i<10; i++)
	{
		for(k=2; k<10; k++)
		{
			printf("%2d X %2d = %2d", k, i, k*i);
		}
		printf("\n");
	}
}
