#include <stdio.h>

int main()
{
	int i, n, j, k;
    scanf("%d", &n);
	for(i=n;i>=1;i--)
	{
	    for(k=1; k<i;k++)
	    {
	        printf(" ");
	    }
	    for(j=1;j<=n;j++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
	return 0;
}
