#include <stdio.h>

void fb()
{
    for(int i=1; i<=100; i++)
    {
        if(i%15 == 0)
            printf("FizzBuzz\n");
        else if(i%3 == 0)
            printf("Fizz\n");
        else if(i%5== 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}

void triangle()
{
    int rows;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++)
    {
        int spaces = rows - i;
        for(int j=1; j<=spaces; j++)
            printf(" ");
        int digits = 2*i-1;
        for(int j=1; j<=digits; j++)
            printf("%d ", j);
            printf("\n");
    }
}

void sumofeven_proofodd()
{
    int sum = 0;
    int pro = 1;
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        if(i%2 == 0){
            sum = sum + i;
              printf("Sum:%d\n", sum);
        }
        else{
            pro = pro * i;
              printf("Product:%d\n", pro);
        }
    }
  
   
}

void reverse()
{
    int num;
    int rev=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num!=0){
        int rem=num%10;
        num = num/10;
        rev=rev*10+rem;
    }
    printf("Reverse of a given number:%d\n",rev);
}

int main()
{
    int choice;
    printf("Enter 1 for fb\n 2 for triangle\n 3 for sumofeven_proofodd\n 4 for reverse\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: fb(); break;
        case 2: triangle(); break;
        case 3: sumofeven_proofodd(); break;
        case 4: reverse(); break;
    }
}