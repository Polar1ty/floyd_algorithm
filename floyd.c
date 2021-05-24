#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define min(X,Y) (((X) < (Y)) ? (X) : (Y))

int main()
{
	int n = 4;
	int i, j, k;
	int inf = 1000;  // very large number for comparison
	int A[4][4] = {{0, inf, 3, inf}, {2, 0, inf, inf}, {inf, 7, 0, 1}, {6, inf, inf, 0}};

	printf("Input:\n");
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			printf("%d ", A[i][j]);
		printf("\n");
	}

	for (k = 0; k < n; ++k)
		for (i = 0; i < n; ++i)
			for (j = 0; j < n; ++j)
				A[i][j] = min(A[i][j], A[i][k] + A[k][j]);

	printf("\nOutput:\n");
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			printf("%d ", A[i][j]);
		printf("\n");
	}

	return 1;
}