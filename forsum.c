#include<stdio.h>
void main()
{
    int j,n,sum=0;
    scanf("%d",&n);
    for(j=0;j<=n;j++)
    {
        sum+=j;
    }
    printf("%d",sum);
}
