#include<stdio.h>
struct employee
{
    int phnumber,age,salary;
    char name[25];
}emp[100];
int main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf(" name , age ,phone numer , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",&emp[i].name,emp[i].age,&emp[i].phnumber,&emp[i].salary);
    }
    printf("\nNAME\tAGE\tPHONE NUMBER\t\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phnumber,emp[i].salary);
    }
}
