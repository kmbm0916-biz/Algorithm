#include <stdio.h>

int main()
{
	int n, i, j, count=1;
	scanf("%d", &n);
	
	int arg[n][n];
	for(i=0; i<=n-1; i++)
	{
		for(j=0; j<=n-1; j++)
		{
			arg[i][j]=count;
			count++;
		}
	}
	for(i=0; i<=n-1; i++)
	{
		for(j=0; j<=n-1; j++)
		{
			printf("%d ", arg[i][j]);
		}
		printf("\n");
	}
}
