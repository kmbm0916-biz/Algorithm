#include <stdio.h>

int main()
{
	int hour, min;
	scanf("%d %d", &hour, &min);
	
	if(min-30<0)
	{
	    --hour;
	    min=min+60-30;
	}
	else
	{
	    min=min-30;
	}
	if(hour<0)
	{
		hour=hour+24;
	}
	printf("%d %d", hour, min);
}
