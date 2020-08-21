#include <stdio.h>
int lcm(int an1, int n2);
int main()
{
    int a,b,LCM;
    printf("Enter any two numbers a and b: ");
    scanf("%d%d", &a, &b);
    if(a,b)
    {

        LCM = lcm(a,b);}
    else{
        LCM = lcm(a,b);}
        
    printf("LCM of %d and %d = %d",a,b, LCM);
    
    return 0;
}
int lcm(int n1, int n2)
{
    static int c = 0;
    c+= n2;
    if((c % n1 == 0) && (c % n2 == 0))
    {
        return c;
    }
    else 
    {
        return lcm(n1, n2);
    }
}
