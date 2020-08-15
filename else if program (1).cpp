#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);
    if(marks<=100&&marks>=85)
    {
        printf("grade A");
    }
    else if(marks<=84&&marks>=70)
    {
        printf("grade B");
    }
    else if(marks<=69&&marks>=55)
    {
        printf("grade c");
    }
    else if(marks<=54&&marks>=40)
    {
        printf("grade D");
    }
    else
    {
        printf("grade E");
    }
    return 0;
    }