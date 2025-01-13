#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter any integer : ");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        ++count;

    }
    printf("Total number of digits : %d\n",count);
}

