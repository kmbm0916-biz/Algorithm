#include <stdio.h>
#include <string.h>

int main()
{
	int num, i;
	char arg[200];
	gets(arg);
	num=strlen(arg);
	
	printf("총 글자 수는 %d이고,\n문자열을 반환한 값은 ", num);
	for(i=0; i<num; i++)
	{
		if(i % 7 == 0)
		{
			printf("\n");
		}
		printf("%d ", arg[i]);
	}
	return 0;
}
