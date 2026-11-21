#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    double d = b * b - 4.0 * a * c;

    if (d < 0)
        printf("No roots\n");
    else if (d == 0)
    {
        int x1 = -b / (2.0 * a);
        printf("One root: %d\n", x1);
    }
    else
    {
        int x1 = (-b - sqrt(d)) / (2.0 * a);
        int x2 = (-b + sqrt(d)) / (2.0 * a);

        printf("Two roots: ");

        if (x1 < x2)
            printf("%d %d\n", x1, x2);
        else
            printf("%d %d\n", x2, x1);
    }

    return 0;
}
