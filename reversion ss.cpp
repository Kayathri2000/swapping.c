#include<stdio.h>
#include<string.h>
int main()
{
   char k[100];
   printf("Enter the content tp be reversed\n");
    gets(k);
	strrev(k);
    printf("the result is : %s\n", k);
	 return 0;
 } 
