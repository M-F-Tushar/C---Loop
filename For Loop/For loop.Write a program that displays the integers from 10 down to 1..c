//Write a program that displays the integers from 10 down to 1.
#include <stdio.h>
int main()
{
    int i;
    for(i=10; i>=1; i--)//The for loop is executed 10 times and terminates when i becomes 0.
        printf("%d\n", i);
    return 0;
}
