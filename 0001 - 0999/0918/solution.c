#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f%f", &a, &b);

    if (a == 0 || b == 0)
        printf("0");
    else if (a > 0 && b > 0)
        printf("1\n");
    else if (a < 0 && b > 0)
        printf("2\n");
    else if (a < 0 && b < 0)
        printf("3\n");
    else
        printf("4\n");

    return 0;
}
