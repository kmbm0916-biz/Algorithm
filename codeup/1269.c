#include <stdio.h>

int main()
{
	int a, b, c, n, i, result=0;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	if(n!=1)
	{
		result=a*b+c;
		
		for(i=n-2; i>=1; i--)
		{
		result=result*b+c;
		}
		printf("%d", result);
	}
	else
	{
		printf("%d", a);
	}
}
