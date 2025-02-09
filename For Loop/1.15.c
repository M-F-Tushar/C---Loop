#include <stdio.h>
int main()
{
int i;
for(i = 0; printf("%d", i++) < 2;)
;
printf("\nEnd = %d\n", i);
return 0;
}
/*In the frst loop iteration, printf() prints the current value of i (which
is 0), and then i is increased by 1. Since printf() returns the number of displayed characters, the returned value is 1. Therefore, the for loop continues because the
condition is true (1 < 2).
The same happens with all numbers up to 10. When i becomes 10, printf()
prints 10 and then i becomes 11. Since two characters are printed, printf()
returns 2, which makes the condition false (2 < 2) and the for loop terminates.
Therefore, the program displays
012345678910
End = 11
