/*
A test consists of 10 multiple choice questions each of which has three possible
answers. The frst answer is worth three points, the second one point, and the third
two points. Write a program that uses the switch statement to read the test taker’s
10 answers and display their fnal score.
*/
#include <stdio.h>
int main()
{
    int i, ans, points;
    points = 0;
    for(i = 0; i < 10; i++)
    {
        printf("Enter answer [1-3]: ");
        scanf("%d", &ans);
        switch(ans)
        {
        case 1:
            points += 3;
            break;
        case 2:
            points += 1;
            break;
        case 3:
            points += 2;
            break;
        default:
            printf("Error: Wrong answer …\n");
            break;
        }
    }
    printf("Candidate gets %d points in total\n", points);
    return 0;
}
