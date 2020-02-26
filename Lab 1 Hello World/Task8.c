#include <stdio.h>
// task 10
int main() {
    float x;
    float y;
    printf("enter a number: ");
    scanf("%f", &x);
    y = x / (1 - x);
    printf("y: %f\n", y);
    return 0;
}
