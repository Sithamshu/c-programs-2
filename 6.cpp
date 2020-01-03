#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("1-addition\n2-substraction\n3-multiplication\n4-division\n");
	printf("enter the choice");
	scanf("%d",&n);
	switch (n)
{
case 1:
  printf("%d",a+b);
break;
case 2:
  printf("%d",a-b);
break;
case 3:
  printf("%d",a*b);
break;	
case 4:
  printf("%d",a/b);
break;
default:
	printf("invalid");
	break;
}
}
