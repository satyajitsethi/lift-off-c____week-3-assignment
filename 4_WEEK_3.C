#include<stdio.h>

int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int a,s;

int main()
{
	printf("Enter a number:");
	scanf("%d",&a);
	s=fact(a);
	printf("Factorial of %d is %d",a,s);
}