#include <stdio.h>
main() 
{
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n\n",  num1 / num2 ); 

    printf("num1>num2: %d\n", num1 > num2);
    printf("num1==num2: %d\n", num1 == num2);

    printf("num1&&num2: %d\n", num1 && num2);
    printf("num1||num2: %d\n", num1||num2);

