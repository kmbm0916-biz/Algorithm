#include <stdio.h>

int main()
{
	int n, i, j, count=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("**");
		for(j=0; j<=count; j++)
		{
			printf(" ");
		}
		++count;
		printf("\n");
	}
}
