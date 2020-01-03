#include<stdio.h>
int main()

{
	int h;
	printf("enter the height");
	scanf("%d",&h);
	if (h<150)
	printf("%d is dwarf",h);
	else if (h>150 && h<165)
	printf("%d is average height",h);
	else if(h>165 && h<190)
	printf("%d is tall",h);
	else 
	printf("%d  is abnormal height",h);
	
}
