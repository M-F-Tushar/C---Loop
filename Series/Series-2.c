#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the last number of the series : ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum= sum + i;
        i=i+2;
    }
    printf("1 + 3 + 5 + .......+ %d = %d\n",n,sum);
}
