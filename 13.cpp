#include<stdio.h>
int main()
{
	int n,i,r;
	printf("enter a number");
	scanf("%d",&n);
	while (n>0)
    {
		r=n%10;
		printf("%d",r);
	n=n/10;
    
    }
	
}
