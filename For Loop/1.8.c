#include <stdio.h>
int main()
{
    int i;
    for(i = 3; i && i-1; i--)//i checks whether i is non-zero.i - 1 checks whether i - 1 is non-zero. The logical AND (&&) operator combines these two conditions. The loop continues if both i and i - 1 are non-zero.
        printf("%d\n", i);
    return 0;
}
