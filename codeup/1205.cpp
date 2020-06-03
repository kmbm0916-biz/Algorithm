#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int a[8]={}, x, y;
	scanf("%d %d", &x, &y);
	a[0]=x+y;
	a[1]=x-y;
	a[2]=y-x;
	a[3]=x*y;
	a[4]=x/y;
	a[5]=y/x;
	a[6]=x*x;
	a[7]=y*y;
	sort(a,a+8);
	printf("%lf", a[0]);
}
