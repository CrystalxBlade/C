#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int root;
    printf("Enter the value: ");
    scanf("%d", &num);

    root = sqrt(num);
    printf("Square root of %d is %d", num, root);
    /*

    int a=1,b=-3,c=-4,posRoot,negRoot;

    posRoot=(-b+sqrt(b*b-4*a*c))/2*a;
    negRoot=(-b-sqrt(b*b-4*a*c))/2*a;

    printf("posRoot =%d \n",posRoot);
    printf("negRoot =%d \n",negRoot);

    */
    return 0;
}