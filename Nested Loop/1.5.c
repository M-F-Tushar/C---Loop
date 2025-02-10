/*
Write a program that reads the grades of fve students in three different courses and
displays the average grade of each in the three courses, as well as the average grade
of all students in all courses.
*/
#include <stdio.h>
#define LESSONS 3
#define STUDENTS 5
int main()
{
    int i, j;
    float grd, stud_grd, class_grd;
    class_grd = 0;
    for(i = 0; i < STUDENTS; i++)
    {
        printf("***** Student %d\n", i+1);
        stud_grd = 0; /* This variable holds the sum of a student’s
grades in all courses. It is initialized to 0 for each one. */
        for(j = 0; j < LESSONS; j++)
        {
            printf("Enter grade for lesson %d: ", j+1);
            scanf("%f", &grd);
            stud_grd += grd;
            class_grd += grd; /* This variable holds the sum of all
grades. */
        }
        printf("Average grade for student_%d is %.2f\n",
               i+1, stud_grd / LESSONS);
    }
    printf("\nAverage class grade is %.2f\n",
           class_grd / (STUDENTS * LESSONS));
    return 0;
}
