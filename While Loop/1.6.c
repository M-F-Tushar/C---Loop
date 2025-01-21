/*Write a program that reads an integer continuously and displays "Hello" as many
times as the value of the integer. If the user enters a negative number, the insertion
of integers should end and the program should display the total number of the dis￾
played "Hello".*/
#include <stdio.h>
int main()
{
    int i, num, times;
    times = 0;
    while(1)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        if(num < 0)
            break;
        for(i = 0; i < num; i++)
            printf("Hello\n");
        times += num;
    }
    printf("Total number is = %d\n", times);
    return 0;
}


