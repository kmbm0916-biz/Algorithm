#include <stdio.h>

int main()
{
	int a=300, b=60, c=10, t, sum=0, i=0, ca=0, cb=0, cc=0;
	scanf("%d", &t);
	while(i!=1)
	{
	    if(t+1>sum+a)
	    {
	        sum=sum+a;
	        ca++;
	    }
	    else
	    {
	        i++;
	    }
	}
	while(i!=2)
	{
	    if(t>sum+b)
	    {
	        sum=sum+b;
	        cb++;
	    }
	    else
	    {
	        i++;
	    }
	}
	while(i!=3)
	{
	    if(t>sum+c)
	    {
	        sum=sum+b;
	        cc++;
	    }
	    else
	    {
	        i++;
	    }
	}
	if(t-sum==0)
	{
	    printf("%d %d %d", ca, cb, cc);
	}
	else if(ca+cb+cc==0)
	{
//	    printf("0");
		printf("%d %d %d", ca, cb, cc);
	}
	else if(t-sum!=0)
	{
//	    printf("-1");
		printf("%d %d %d", ca, cb, cc);
	}
	return 0;
}
