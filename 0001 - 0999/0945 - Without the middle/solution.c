```
#include <stdio.h>

int main()
{
    int a, b, c, f;
    scanf("%d", &a);

    b = a / 100;
    c = a % 10;

    f = b * 10 + c;

    printf("%d", f);

    return 0;
}

```