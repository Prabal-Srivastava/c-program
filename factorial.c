#include<stdio.h>
int main()
{
    int a,i,f=1;
    printf("Give the number for the factorial = ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    f=f*i;
    }
    printf("The factorial of the given number is = %d",f);
    return 0;
}
