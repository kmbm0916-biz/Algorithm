#include <stdio.h>

int plus(int val1, int val2)
{
	printf("%d\n", val1 + val2);
	return val1 + val2;
}

int minus(int val1, int val2)
{
	printf("%d\n", val1 - val2);
	return val1 - val2;
}

int multiplication(int val1, int val2)
{
	printf("%d\n", val1 * val2);
	return val1 * val2;
}

int division(int val1, int val2)
{
	printf("%d\n", val1 / val2);
	return val1 / val2;
}

int main()
{
	int val1, val2, i;
	char sign;
	scanf("%d", &val1);
	reload:
	scanf("%c %d", &sign, &val2);
//	switch(sign)
//	{
//		case '+' : val1 = plus(val1, val2);
//				   goto reload;
//			break;
//		case '-' : val1 = minus(val1, val2);
//		  		   goto reload;
//			break;
//		case '*' : val1 = multiplication(val1, val2);
//		  		   goto reload;
//			break;
//		case '/' : val1 = division(val1, val2);
//		  		   goto reload;
//			break;
//		default : printf("Error : Inputed wrong Operator.\n");
//				  goto reload;
//	}
	if(sign == 'a')
	{
		val1 = plus(val1, val2);
		goto reload;
	}
	else if(sign == 'b')
	{
		val1 = minus(val1, val2);
		goto reload;
	}
	else if(sign == 'c')
	{
		val1 = multiplication(val1, val2);
		goto reload;
	}
	else if(sign == 'd')
	{
		val1 = division(val1, val2);
		goto reload;
	}
	if(sign != 'a'||sign != 'b'||sign != 'c'||sign != 'd')
	{
		printf("Error : Inputed wrong Operator.\n");
		goto reload;
	}
}
