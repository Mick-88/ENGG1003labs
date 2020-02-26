#include <stdio.h>
int main()
{
    int k;
    printf("enter an integer: ");
    scanf("%d", &k);
    k = 2*k;
    printf("that integer doubled is: %d\n", k);
    return 0;
}
