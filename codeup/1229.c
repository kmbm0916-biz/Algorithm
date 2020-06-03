#include <stdio.h>

int main()
{
	double i, w, sw=0, f=0;
	scanf("%lf %lf", &i, &w);
	if(i>=160)
	{
		sw=(i-100)*0.9;
		f = (w-sw)*100/sw;
		if(f<=10)
    {
        printf("정상");
        return 0;
    }
    else if(f>20)
    {
        printf("비만");
        return 0;
    }
    else if(f>10&&f<=20)
    {
        printf("과체중");
        return 0;
    }
	}
	else if(i<160&&i>=150)
	{
		sw=(i-150)/2+50;
		f = (w-sw)*100/sw;
		if(f<=10)
    {
        printf("정상");
        return 0;
    }
    else if(f>20)
    {
        printf("비만");
        return 0;
    }
    else if(f>10&&f<=20)
    {
        printf("과체중");
        return 0;
    }
	}
	else if(i<150)
	{
		sw=(i-100);
		f = (w-sw)*100/sw;
		if(f<=10)
    {
        printf("정상");
        return 0;
    }
    else if(f>20)
    {
        printf("비만");
        return 0;
    }
    else if(f>10&&f<=20)
    {
        printf("과체중");
        return 0;
    }
	}
}
