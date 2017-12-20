#include<stdio.h>

#include<math.h>
void main()
{
	int rem=0,r,n;
	scanf("%d %d",&r,&n);
	int k=n;
	int arm=0;
	while(k!=0)
	{
   	 
    	rem=k%10;
    	k=k/10;
    
    	arm+=pow(rem,r);
	}
	if(n==arm)
	{
    	printf("It is armstrong number");
	}
	else
	{
	printf("Not an armstrong number");
	}

}
