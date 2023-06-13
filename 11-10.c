#include <stdio.h>

void main()
{
	FILE *wfp;
	
	wfp = fopen("c:\\c_study\\gugu.txt", "w");

	for (int i = 2; i < 10; i++) {
	       fprintf(wfp, "#Á¦%d´Ü# ", i, " ");
	}
	fprintf(wfp,"\n");

	for (int j = 1; j < 10; j++) {
		for (int k = 2; k < 10; k++) {
			fprintf(wfp, "%dX%d = %d ", k, j, k*j );
		}
		fprintf(wfp, "\n");
	}
	
	fclose(wfp);
}	

