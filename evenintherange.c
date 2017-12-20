#include<stdio.h>
void main()
{
	int l,u,i;
	scanf("%d %d",&l,&u);
	for(i=l+1;i<u;i++)
	{
	    if(i%2==0)
	    {
	        printf("%d ",i);
	    }
	}
}
