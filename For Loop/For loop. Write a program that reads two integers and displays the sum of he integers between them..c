/*
Write a program that reads two integers and displays the sum of the integers
between them. For example, if the user enters 3 and 8, the program should display
22 because 4+5+6+7 = 22. The program should check which one of the two input
numbers is the greater and act accordingly.
*/
#include <stdio.h>
int main()
{
    int i, j, sum;
    printf("Enter numbers: ");
    scanf("%d%d", &i, &j);
    sum = 0;
    if(i < j)
    {
        for(i = i+1; i < j; i++)
            sum += i;
    }
    else if(j < i)
    {
        for(j = j+1; j < i; j++)
            sum += j;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
