#include<stdio.h>
int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    a+=b;
    b=a-b;
    a-=b;
    printf("after swaping a=%d,b=%d",a,b);
    return 0;
    }
