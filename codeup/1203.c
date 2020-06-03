#include <stdio.h>

int main()
{
	int BMI;
	scanf("%d", &BMI);
	if(BMI<=10)
	{
		printf("정상");
		return 0; 
	}
	else if(BMI<=20)
	{
		printf("과체중");
		return 0;
	}
	else if(BMI>20)
	{
		printf("비만");
		return 0;
	}
	return 0;
}
