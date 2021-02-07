#include<stdio.h>
int main()
{
    long a,b;
    printf("\n Enter two numbers(long type) to perform all arithmetic operations: ");
    scanf("%ld %ld", &a , &b);
    printf(" \n Sum = %ld",(a+b));
    printf("\n Difference = %ld",(a-b) );
    printf("\n Multiplication = %ld", (a*b));
    printf("\n Division = %ld",(a/b));
    printf("\n %ld mod %ld = %ld", a , b , (a%b));
    return 0;
}