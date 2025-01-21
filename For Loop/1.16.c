/*Write a program that reads an integer and displays a message to indicate whether
it is prime or not. Remember, a prime number is any integer greater than 1 with no
divisor other than one and itself.*/
#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter Positive numbers : ");
    scanf("%d",&num);
    if(num>=0)
    {
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                printf("%d is not Prime\n", num);
                return 0;
            }
        }
        printf("The number %d is prime\n", num);
    }
    else
        printf("Error : enter positive number\n");
    return 0;
}
