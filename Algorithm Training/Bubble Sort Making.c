#include <stdio.h>

int main()
{
	int a[10], i, count, temp=0;
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	
	restart:
	count=0;
	for(i=1; i<10; i++)
	{
		if(a[i]<a[i-1])
		{
			count++;
			temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	if(count!=0)
	{
		goto restart;
	}
	//±è°­¹Î C¾ð¾î  https://blog.naver.com/kmbm0916
}
