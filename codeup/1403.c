#include <stdio.h>

int main()
{
	 int a[100], n, i, h;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
    }
    for (h = 0; h < 2; h++)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}
