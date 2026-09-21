
#include <stdio.h>

int main(void)
{
    int a, b;
    float result;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter an integer: ");
    scanf("%d", &b);

    result = (float)a / b;

    printf("The result of division is %f\n", result);

    return 0;
}