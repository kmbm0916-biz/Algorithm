#include <stdio.h>

int main()
{
	double i, w, sw=0, f=0;
	scanf("%lf %lf", &i, &w);
	sw = (i-100)*0.9;
	f = (w-sw)*100/sw;
	if(f<=10)
	{
		printf("����");
		return 0;
	}
	else if(f>20)
	{
		printf("��");
		return 0;
	}
	else if(f>10&&f<=20)
	{
		printf("��ü��");
		return 0;
	}
	return 0;
}
