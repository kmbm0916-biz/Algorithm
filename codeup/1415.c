#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
	int n[10], i, min, max, odd[10], even[10];
	for(i=0; i<=9; i++)
	{
		scanf("%2d ", &n[i]);
		if(n[i]%2==0)
		{
			even[10]=n[i];
		}
		else
		{
			odd[10]=n[i]
		}
	}
	sort(even, even+strlen(even));
	sort(odd, even+strlen(odd));
	sort(n, n+10);
	
	
}
