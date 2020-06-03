#include <stdio.h>

int analy(int arr[], int count)
{
	int re_max=0, i, pos;
	for(i=0; i<=count-1; i++)
	{
		if(arr[i]>=re_max)
		{
			re_max = arr[i];
		}
	}
	for(i=0; i<count; i++)
	{
		if(arr[i]==re_max)
		{
			pos=i;
			break;
		}
	}
	return pos;
}

int main()
{
	int count, i;
	scanf("%d", &count);
	
	int arr[count];
	
	for(i=0; i<=count-1; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("%d", analy(arr, count));
	
	return 0;
}
