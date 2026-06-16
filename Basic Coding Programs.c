#include <stdio.h>

void temp_converter()
{
    double cel, fah, kel, ran;

    printf("Enter the input in celsius:");
    scanf("%lf", &cel);

    fah = (cel * 1.8) + 32;
    printf("celsius to Fahrenheit : %f\n", fah);

    kel = cel + 273.15;
    printf("celsius to kelvin : %f\n", kel);

    ran = (cel * 1.8) + 491.67;
    printf("celsius to Rankine : %f\n", ran);
}

void even_odd_classifier()
{
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("The %d is even", num);
    }
    else
    {
        printf("The %d is odd", num);
    }
}

void grade_calculator()
{
    int marks;

    printf("Enter the marks:");
    if(marks != 0)
    {
        scanf("%d", &marks);

        if(marks >= 90 && marks <= 100)
        {
            printf("grade A");
        }
        else if(marks >= 70 && marks <= 89)
        {
            printf("grade B");
        }
        else if(marks >= 50 && marks <= 69)
        {
            printf("grade C");
        }
        else if(marks >= 35 && marks <= 49)
        {
            printf("grade D");
        }
        else
        {
            printf("Fail");
        }
    }
    else
    {
        printf("Enter a valid input");
    }
}

void l_year()
{
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is leap year");
    }
    else
    {
        printf("%d is not a leap year");
    }
}

void calculator()
{
    int a, b;
    char op;

    printf("Enter two numbers a and b:");
    scanf("%d %d", &a, &b);

    printf("Enter the operator (+,-,*,/):");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Addition:%d", a + b);
            break;

        case '-':
            printf("Subtraction:%d", a - b);
            break;

        case '*':
            printf("Multiplication:%d", a * b);
            break;

        case '/':
            printf("Division:%d", a / b);
            break;
    }
}

int main()
{
    int num;

    printf("Enter 1 for temp_converter"
           "2 for even_odd classifier,"
           "3 for grade_calculator,"
           "4 for l_year,"
           "and 5 for calculator");

    scanf("%d", &num);

    switch(num)
    {
        case 1:
            temp_converter();
            break;

        case 2:
            even_odd_classifier();
            break;
        case 3:
            grade_calculator();
            break;
        case 4:
            l_year();
            break;
        case 5:
             calculator();
             break;
    }
}    