#include <stdio.h>
int main()
{
int i;
for(i = 0; i ? 0 : i+1; i++)
printf("%d\n", i);
return 0;
}
/*This uses the ternary operator: condition ? expr1 : expr2.
If condition is true (non-zero), the expression evaluates to expr1.
If condition is false (0), the expression evaluates to expr2.
