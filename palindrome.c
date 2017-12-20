#include<stdio.h>
#include<math.h>
void main()
{
int a[10],b[10],n,i,j,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(j=n-1,i=0;j>=0,i<n;j--,i++)
{
    b[j]=a[i];
}
for(j=0;j<n;j++)
{
    if(a[j]==b[j])
    {
        k++;
    }
}
if(k==n)
printf("Palindrome");
else
printf("Not Palindrome");
}
