/*Write a program that produces the following output.
*
**
***
****
*****
*/
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <= i; j++)
            printf("* ");
        printf("\n"); /* Add a new line to display the next star ('*')
characters. */
    }
    return 0;
}
