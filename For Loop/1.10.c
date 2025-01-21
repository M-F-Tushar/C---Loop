#include <stdio.h>
int main()
{
    int i, j;
   for(i=10,j=2;i!=j;i-=2,j+=2)
        printf("%d %d\n", i, j);
    return 0;
}
