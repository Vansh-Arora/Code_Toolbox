#include<stdio.h>
int factorial(int num)
{
    if(num <= 1)
        return 1;
    
    return num * factorial(num - 1);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",factorial(a));
    return 0;
}