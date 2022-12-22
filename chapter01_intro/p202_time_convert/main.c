#include<stdio.h>
int main()
{
    int num,hrs,min0,min,sec;
    printf("Enter time in seconds: ");
    scanf("%d",&num);

        hrs=num/3600;
        min0=num%3600;
        min=min0/60;
        sec=min0%60;

        printf("%d = %dhrs %dmin %dsec",num,hrs,min,sec);


    return 0;
}
