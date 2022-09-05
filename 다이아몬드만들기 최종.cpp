#include <stdio.h>


int main(void)
{
	int i,j,k,n,fn;
	
	scanf("%d", &n);
	fn = n;


	for (i = 0; i < n; i++) 
	{
		for (j = i; j < n-1; j++) 
		{
			printf(" ");
		}
		for (k = 1; k <= (i*2) + 1; k++) 
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = n; i >= 0; i--)
	{
		for (j = i-1; j <= (n-1); j++) 
		{
			printf(" ");
		}

		for (k = 0; k < ((i-1) * 2) - 1; k++) 
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;
}
