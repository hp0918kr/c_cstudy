#include <stdio.h>

void gugu(int i) 
{
	int j;

	for( j = 1; j < 10; j++) {

	printf("%d X %d = %d\n", i, j, i * j);

	}
}
void main() {
	int k;
	
	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &k);
	
	gugu(k);
}
