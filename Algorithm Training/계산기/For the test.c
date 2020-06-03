#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	
	char s;
	scanf("%c %d", &s, &b);
	if(s=="+")
	{
		printf("T");
	}
	else
	{
		printf("F");
	}
}
