/*
How many times is the next while loop executed?
*/
#include <stdio.h>
int main()
{
    int a = 256, b = 4;
    while(a != b)
        b = b*b;
    return 0;
}
