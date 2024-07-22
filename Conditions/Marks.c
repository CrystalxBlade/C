#include <stdio.h>

int main()
{
    float english, maths, science;

    printf("Enter the marks of English: ");
    scanf("%f",&english);

    printf("Enter the marks of Maths: ");
    scanf("%f",&maths);

    printf("Enter the marks of Science: ");
    scanf("%f",&science);

    if (english < 33 || maths < 33 || science < 33)
    {
        printf("failed");
    }
    else if((english + maths + science)/3 <40)
    {
        printf("failed due to less percentage");
    }
    else 
    {
        printf("pass");
    }
    
    
    return 0;
    
}