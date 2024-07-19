#include <stdio.h>

int main()
{
    int a = 10;
    int b = 40;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value of a = %d \n of b = %d \n",a,b);
    return 0;

}