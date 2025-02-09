/*
Write a program that reads an integer and displays its multiplication table. For exam￾
ple, if the user enters 5, the output should be 1*5 = 5, 2*5 = 10,…, 10*5 = 50. The
program should force the user to enter an integer within [1, 10].
*/
#include <stdio.h>
int main()
{
    int i, num;
    for(;;) /* Exit from the infinite loop when the user enters a number
in [1,10]. */
    {
        printf("Enter number [1-10]: ");
        scanf("%d", &num);
        if((num >= 1) && (num <= 10))
            break;
    }
    for(i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", i, num, i*num);
    return 0;
}
