#include <stdio.h>
int lcm(int a,int b)
{ 
    static int z=1;
    if (z%a==0 && z%b==0)
    {
        return z;
    }
    z++;
    lcm(a,b);
    return z;
}
int main()
{
    int a,b,c;
    int prime[10];
    printf("\n\tInput first number: ");
    scanf("%d",&a);
    printf("\n\tInput second number: ");
    scanf("%d",&b);
    c=lcm(a,b);
    printf("\n\tLCM of %d and %d = %d\n",a,b,c);
    return 0;
}