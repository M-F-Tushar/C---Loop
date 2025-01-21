/*
Write a program that reads the grades of 100 students on a test and before it terminates it displays the average of the passed and failed students. A student passes the exams if his/her grade is equal to or greater than 5. If the user enters a grade out of [0, 10], the program should ignore it and display an error message. If the user enters −1, the insertion of grades should end.
*/
#include <stdio.h>
int main()
{
    int i, suc, fail;
    float grd, sum_suc, sum_fail;
    suc = fail = 0;
    sum_suc = sum_fail = 0;
    for(i = 0; i < 100; i++)
    {
        printf("Enter grade: ");
        scanf("%f", &grd);
        if(grd == -1)
            break;
        if(grd > 10 || grd < 0)
        {
            printf("Wrong grade, try again …\n");
            i--; /* Since the input grade is out of [0,10], the grade is
ignored and we decrease the value of i to repeat the input
process. */
            continue;
        }
        if(grd >= 5)
        {
            suc++;
            sum_suc += grd;
        }
        else
        {
            fail++;
            sum_fail += grd;
        }
        if(suc)
            printf("Avg(+) = %.2f\n", sum_suc/suc);
        else
            printf("Everybody failed\n");
        if(fail)
            printf("Avg(−) = %.2f\n", sum_fail/fail);
        else
            printf("None failed\n");
        return 0;
    }

