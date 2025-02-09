#include<stdio.h>
int main()
{
    int i, j=5;
    for(i=0; i+j==5; j++)
    {
        printf("One\n");
        i = 4;
        j = 1;
    }
    printf("Val1 = %d Val2 = %d\n", i, j);
    return 0;
}
/*First iteration. Since i becomes 0, the condition i+j == 5 (0+5 = 5 == 5) is true
and the program prints One. Then, i and j become 4 and 1, respectively.
Second iteration. Since the j++ statement makes j equal to 2, the condition i+j ==
5 (4+2 = 6 == 5) becomes false and the loop terminates.
