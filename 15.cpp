#include<stdio.h>
int main()
{
	int n1=0,n2=1,n,i,next;
	printf("enter a number");
	scanf("%d",&n);
	printf("fobanocci series is \n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",n1);
		next=n1+n2;
		n1=n2;
		n2=next;
		
	}
}
