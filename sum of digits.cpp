#include<stdio.h>
int sum(int n);
int main()
{
	int ans,num;
	printf("enter the num: \n");
	scanf("%d",&num);
	ans=sum(num);
	printf("sum of the digits:%d",ans);
	return 0;

}
int sum(int n)
{
	if(n==0)
	return 0;
	return(n%10+sum(n/10));
}

