#include <stdio.h>

int main()
{
    int time,score,i;
    scanf("%d %d", &time, &score);
    for(i=time; i<90; i+=5){
        score++;
    }
    printf("%d", score);

}
