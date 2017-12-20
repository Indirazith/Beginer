#include<stdio.h>
void main()
{
    int n,rem;
    long cout=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        cout++;
    }
    printf("%ld",cout);
}
