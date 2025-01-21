#include <stdio.h>
int main()
{
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(i+j == 1)
                break;
            printf("Two ");
        }
        printf("One ");
    }
    printf("\nVal1 = %d Val2 = %d\n", i, j);
    return 0;
}
