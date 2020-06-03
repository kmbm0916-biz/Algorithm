#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
//	int n1, n2, n3;
//	scanf("%d %d %d", &n1, &n2, &n3);
//	
//	if(n1>n2)
	int a[10]={0,1,6,4,2,7,3,9,5,8};
	sort(a,a+10);
	for(int i=0;i<10;++i) 
	printf("%d ",a[i]);
}
