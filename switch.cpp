#include<stdio.h>
int main()
{
    int x=0;
    printf("value of x= ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("food item=pizza\nprice =239");
        break;
        case 2:printf("food item=burger\nprice=129");
        break;
        case 3:printf("food   item=pasta\nprice=179");
        break;
        case 4:printf("food item=french fries\nprice=99");
        break;
        case 5:printf("food item=sandwich\nprice=149");
        break;
        default:printf("ordered item is not available" );
        }
    return 0;
    }
    
    
     