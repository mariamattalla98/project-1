#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A; int B;
    printf("Enter first number =");
    scanf("%d",&A);
    printf("Enter second number =");
    scanf("%d",&B);
    Sum(A,B);
    Subtraction(A,B);
    Multiply(A,B);
    Division(A,B);
    return 0;
}
void Sum(int x , int y)
{
      printf("The sum of two numbers = %d \n",x+y);

}
void Subtraction(int x , int y)
{

      printf("The subtraction of two numbers = %d \n",x-y);

}
void Multiply(int x , int y)
{

      printf("The multiplication of two numbers = %d \n",x*y);

}
void Division(int x , int y)
{

      printf("The division of two numbers = %f \n",(float)x/(float)y);

}
