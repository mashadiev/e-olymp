#include <stdio.h>
#include <math.h>

int main()
{
    int S, a;
    scanf("%d%d", &S, &a);

    double h = (-a + sqrt(a * a + 8.0 * S)) / 2;

    printf("%.2f\n", h);

    return 0;
}
