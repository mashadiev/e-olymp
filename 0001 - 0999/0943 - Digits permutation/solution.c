#include <stdio.h>

int main()
{
    int a, b, c, d, f;
    scanf("%d", &a);

    b = a / 100;
    c = a % 10;
    d = a / 10 % 10;

    f = c * 100 + d * 10 + b;

    printf("%d", f);

    return 0;
}
