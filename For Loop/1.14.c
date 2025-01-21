/*Write a program that reads 8 bits (each bit is 0 or 1) and displays the corresponding
decimal number, assuming that the bits are entered from left to right. For example,
if the user enters 10000000 the program should display 128.*/
#include <stdio.h>
int main()
{
    int i, num, dig;
    num = 0;
    for(i = 7; i >= 0; i--)
    {
        printf("Enter digit (0 or 1): ");
        scanf("%d", &dig);
        num += (dig << i);
    }
    printf("The decimal value = %d\n", num);
    return 0;
}
