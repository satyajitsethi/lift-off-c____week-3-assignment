#include<stdio.h>

int HCF(int a,int b,int c)
{
	if (c==1)
	{
		return 1;
	}
	
	else if (a%c==0 && b%c==0)
	{
		return c;
	}
	else{
	return HCF(a,b,--c);
	}
}

int LCM(int a,int b,int t)
{
	if((a*t)%b==0)
	{
		return a*t;
	}
	else
	{
		return LCM(a,b,++t);
	}
}

int x,y,d,e;

int main()
{
	printf("Enter first number:");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	if (x>y)
	{
		e=HCF(x,y,y);
		d=LCM(x,y,1);
	}
	else
	{
		e=HCF(x,y,x);
		d=LCM(x,y,1);
	}
	printf("LCM of %d and %d is %d :",x,y,d);
	printf("\nHCF of %d and %d is %d :",x,y,e);
}