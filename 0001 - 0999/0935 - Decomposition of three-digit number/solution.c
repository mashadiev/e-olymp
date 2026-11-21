#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);

    a = abs(a);

    b = a % 10;
    c = a / 100;
    d = a / 10 % 10;

    printf("%d\n%d\n%d", c, d, b);

    return 0;
}
