//Write a program that displays the product of all odd numbers from 1 to 20.
#include <stdio.h>
int main()
{
    int i, prod;
    prod = 1; /* To calculate the product, we initialize the prod
variable to 1, which is the neutral element of the
multiplication. */
    for(i = 1; i < 20; i+=2) /* To calculate the product of odd numbers,
we increase the step by two. */
        prod *= i;
    printf("Product = %d\n", prod);
    return 0;
}
