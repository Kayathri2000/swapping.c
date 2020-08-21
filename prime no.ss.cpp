#include<stdio.h>
int prime(int);
int i;
int main()
{
	int n,primeno;
	printf("enter a number n= ");
	scanf("%d",&n);
	i=n/2;
	primeno=prime(n);
	if(primeno==1)
	{printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime no",n);
	}
	return 0;
}
int prime(int n)
{
	if(i==1)
	{
		return 1;
	}
	else if(n%i==0)
	{
	return 0;
	}
	else{
		i-=1;
		prime(n);
	
	}
}
