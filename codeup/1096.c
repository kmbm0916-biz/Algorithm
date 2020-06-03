#include <stdio.h>

int main()
{
	int table[19][19]={};
	int i, j, n, x, y;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &x, &y);
		table[x-1][y-1]=1;
	}
	for(i=0; i<=19; i++)
	{
		for(j=0; j<=19; j++)
		{
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}
}
