#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i < 3; printf("%d ", ++i))
        ; /* Empty block of statements. */
    return 0;
}
/*As discussed previously, the expressions in a for statement can be any valid
C expression. As such, this code uses printf() in place of the third expression.
Before printf() is executed, i is increased by one. The for loop is executed three
times and the program displays 1 2 3.
