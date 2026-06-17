#include <stdio.h>

void multiplication_table()
{
    int num;
    printf("Enter the number you want the multiplication table for: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++)
        printf("%d * %d = %d\n", num, i, num*i);
}
void prime_number(){
   int num;
   printf("Enter a number:");
   scanf("%d", &num);
   for(int i=2; i<=num; i++)
{
    int count = 0;
    for(int j=2; j<i; j++)  
    {
        if(i % j == 0)  
            count++;
            break;
    }
    if(count == 0)
        printf("%d ", i);  
}
}

void sum_of_digit()
{
    int num, rem=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0 )
    {
        rem = rem + (num % 10);
        num = num /10;
    }
    printf("Sum of digits in %d", rem);
}

void pattern()
{
    int rows, c;
    char a;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter the character you want the pyramid pattern to be of: ");
    scanf(" %c", &a);
     for(int i=1; i<=rows; i++)
    {
    for(int j=1; j<=i; j++){
        printf("%c", a);
    }
    printf("\n");
}
    
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-1; j++){
            printf(" ");
    }
    for(int j=1; j <= i; j++){
        printf("%c", a);
    }
    printf("\n");
}
    
    for(int i=1; i<=rows; i++)
    {
        int spaces = rows - i;
        for(int j=0; j<spaces; j++){
            printf(" ");
        }
        int stars = 2*i-1;
        for(int j=0; j<stars; j++){
            printf("%c", a);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter 1 for pattern, 2 for multiplication table, 3 for prime_number, 4 for sum-of-digits:");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            pattern();
            break;
        case 2:
            multiplication_table();
            break;
        case 3:
            prime_number();
            break;
        case 4:
            sum_of_digit();
            break;
    }
    return 0;
}