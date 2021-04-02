#include<stdio.h>

int sqr(int n)
{
	return n*n;
	
}

int a,s;

int main()
{
	printf("Enter a number:");
	scanf("%d",&a);
	s=sqr(a);
	printf("Sqare of %d is %d",a,s);
}