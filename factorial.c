// This works fine only till factorial(16)
#include<stdio.h>
int factorial(int num)
{
    if(num <= 1)
        return 1;
    
    return num * factorial(num - 1);
}