#include<stdio.h>
int main()

{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if (n%3==0 && n%5==0)
    	printf("fizzbizz");
	else if (n%5==0)
		printf(" bizz");
	else if (n%3==0 )
	    printf("fizz");
	else 
        printf("%d",n);
    }
    
