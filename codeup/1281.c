#include <stdio.h>

int main()
{
	int a, b, result=0, i;
	scanf("%d %d", &a, &b);
	for(i=a; i<=b; i++)
	{
		if(i%2==0)
		{
			result = result - i;
			printf("-%d", i);
		}
		else
		{
			result = result + i;
			printf("%d", i);
		}
	}
	printf("%d", result);
}
