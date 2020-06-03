#include <stdio.h>

int main()
{
	int n, i, j, result=0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			result++;
		}
	}
	if(result>2)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
	}
}
