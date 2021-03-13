#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, s;
    printf("Enter the number: \n");
    scanf("%d", &num);
    s = sum(num);
    printf("Sum of digits in %d is - %d", num, s);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
