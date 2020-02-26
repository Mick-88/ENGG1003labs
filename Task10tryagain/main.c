#include <stdio.h>
#include <stdlib.h>
// Task 10.4
int main() {
    float x;
    float y;
    printf("enter a number: ");
    scanf("%f", &x);
    y = (x + 2) / (x - 1);
    printf("y: %f\n", y);
    return 0;
}
