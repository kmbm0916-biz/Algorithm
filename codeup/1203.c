#include <stdio.h>

int main()
{
	int BMI;
	scanf("%d", &BMI);
	if(BMI<=10)
	{
		printf("����");
		return 0; 
	}
	else if(BMI<=20)
	{
		printf("��ü��");
		return 0;
	}
	else if(BMI>20)
	{
		printf("��");
		return 0;
	}
	return 0;
}
