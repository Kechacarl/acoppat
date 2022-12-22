#include <stdio.h>
int main()
{
    int time1,time2,time3,sum;
    printf("Enter the various cooling times\n");
    scanf("%d%d%d",&time1,&time2,&time3);
    sum=time1+time2+time3;
    printf("THE THREE TIMES ARE  %d   %d   %d\n",time1,time2,time3);
    printf("THE TOTAL COOLING TIME IS  %d SECONDS",sum);
}
