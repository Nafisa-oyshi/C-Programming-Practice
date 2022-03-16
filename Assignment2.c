#include<stdio.h>
int main()
{
    int num1,num2,add,sub,mul,division,remainder;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);

    add=num1+num2;
    printf("\nAddition is : %d",add);

    sub=num1-num2;
    printf("\nSubstraction is : %d",sub);

    mul=num1*num2;
    printf("\nMultiplication is : %d",mul);

    division=num1/num2;
    printf("\nDivision is : %d",division);

    remainder=num1%num2;
    printf("\nRemainder is : %d\n",remainder);

    return 0;
}

