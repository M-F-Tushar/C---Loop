#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0,fact,i;
    printf("Enter an integer : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp / 10;

    }
    if(sum==num)
        printf("%d is a strong number",num);
    else
        printf("%d is not a strong number",num);
}
