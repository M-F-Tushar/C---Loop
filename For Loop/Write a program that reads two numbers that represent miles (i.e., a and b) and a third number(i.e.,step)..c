/*Write a program that reads two numbers that represent miles (i.e., a and b) and a
third number (i.e., step). The program should display one column with the miles
and a second with the corresponding kilometers starting from a up to b (assume that
a < b) with a step of step. Note that 1 mile = 1.6 km.*/
#include<stdio.h>
int main()
{
    double i,a,b,step;
    printf("Enter miles interval : ");
    scanf("%lf%lf", &a, &b);

    printf("Enter step : ");
    scanf("&lf", &step);

    printf("MILE\t\t KLM\n");
    printf("--------------------\n");
    for(i=a; i<b; i+= step)
        printf("%.2f\t\t %.2f\n", i, 1.6*i);
    return 0;
}
