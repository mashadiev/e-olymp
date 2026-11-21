#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double maxs;

    scanf("%d%d%d", &a, &b, &c);

    maxs = sqrt(b * b + c * c);

    if (a * 2 >= maxs)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
