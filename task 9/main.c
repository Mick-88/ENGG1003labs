#include <stdio.h>

int main()
{
    int k;
    float x;
    float y;
    printf("enter a number: ");
    scanf("%f", &x); //change of %d to %f
    y = (9*x) + 32;
    printf("y: %f\n", y);
    return 0;
}
