#include <stdio.h>

int main(){

    int num1, num2;
    float result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator[ + , - , * , / ]: ");
    scanf(" %c", &operator);

    if(operator == '+')
    {
        result = num1 + num2;
        printf("%.2f", result);
    }
    else if(operator == '-')
    {
        result = num1 - num2;
        printf("%.2f", result);
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        printf("%.2f", result);
    }
    else if (operator == '/')
    {
        if (num2 == 0)
        {
            printf("division-by-zero is not allowed");
        }
        else
        {
            float result = num1 / num2;
            printf("%.2f", result);
        }
    }
    else
    {
        printf("Only choose the given operator!");
    }

    return 0;
}