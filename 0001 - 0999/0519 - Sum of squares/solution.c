#include <stdio.h>

int main()
{
    long long a, b, f;

    scanf("%lld%lld", &a, &b);

    f = a * a + b * b;

    printf("%lld", f);

    return 0;
}
