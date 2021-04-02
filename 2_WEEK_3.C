#include <stdio.h>

int fact(int n)
{
	int j=1;
	for(int i=n;i>0;i--)
	{
		j=j*i;
	}
	return j;
}

int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	int b=fact(a);
	printf("Factorial of %d is %d",a,b);
	
}