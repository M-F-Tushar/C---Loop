//Write a program that reads an integer and displays the prime numbers that are less than or equal to it.
#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i = 2; i <= num; i++)
    {
        for(j = 2; j <= i; j++)
        {
            if(i%j == 0)
            {
                if(i == j)
                    printf("Prime number = %d\n", i);
                else
                    break;
            }
        }
    }
    return 0;
}
