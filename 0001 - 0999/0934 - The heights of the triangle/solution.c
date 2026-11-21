#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    double ha = 2 * area / a;
    double hb = 2 * area / b;
    double hc = 2 * area / c;

    printf("%.2f %.2f %.2f\n", ha, hb, hc);

    return 0;
}
