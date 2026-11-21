#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);

    b = a / 100 % 10;
    c = a / 10 % 10;

    d = b * 10 + c;

    printf("%d", d);

    return 0;
}
