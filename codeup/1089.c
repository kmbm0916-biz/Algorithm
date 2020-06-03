#include <stdio.h>

int main()
{
	int a, d, n, count_sum=0;
	scanf("%d %d %d", &a, &d, &n);
	a=a+(n-1)*d;
	printf("%d", a);
}
