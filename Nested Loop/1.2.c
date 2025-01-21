#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("One ");
        for(i = 0; i < 2; i++)
            printf("Two ");
    }
    printf("Val = %d\n", i);
    return 0;
}
