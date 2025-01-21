/*Write a program that reads the initial population of a country and its annual popula￾
tion growth (as a percentage). Then, the program should read the number of years
and display the new population for each year.*/
#include <stdio.h>
int main()
{
    int i, years, pop, pop_incr;
    double rate;
    printf("Enter population: ");
    scanf("%d", &pop);
    printf("Enter increase rate (%%): ");
    scanf("%lf", &rate);
    printf("Enter years: ");
    scanf("%d", &years);
    printf("\nYear\tIncrease\tPopulation\n");
    printf("----------------------------------------\n");
    for(i = 1; i <= years; i++)
    {
        pop_incr = pop * rate / 100; /* Calculation of population's
increase. */
        pop += pop_incr; /* Calculation of new population. */
        printf("%d\t%d\t\t%d\n", i, pop_incr, pop);
    }
    return 0;
}
