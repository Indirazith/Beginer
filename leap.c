#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("Leap year");
    }
    else if(a%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
}
