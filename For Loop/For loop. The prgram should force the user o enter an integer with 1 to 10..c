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
