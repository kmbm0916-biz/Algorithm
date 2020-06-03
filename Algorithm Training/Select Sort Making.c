#include <stdio.h>

int main()
{
	int a[10], i, j, k, min=10000000, max=0, temp=0, count=0;
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	
	for(i=0; i<10; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			count = i;
		}
	}
	
	temp = a[0];
	a[0] = min;
	a[count] = temp;
	
	for(i=1; i<10; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			count = i;
		}
	}
	
	temp = a[1];
	a[1] = min;
	a[count] = temp;
	
	for(i=2; i<10; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			count = i;
		}
	}
	
	temp = a[2];
	a[2] = min;
	a[count] = temp;
	
	for(i=3; i<10; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			count = i;
		}
	}
	
	temp = a[2];
	a[2] = min;
	a[count] = temp;
	
	printf("%d %d %d %d %d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
} 
