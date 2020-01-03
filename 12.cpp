#include<stdio.h>
int main()
{
	int n,i,r=0;
	printf("enter a number");
	scanf("%d",&n);
	while (n>0)
    {
		i=n%10;
        r=r+i;
        n=n/10;
    }
	printf(" sum of digits = %d",r);

}
