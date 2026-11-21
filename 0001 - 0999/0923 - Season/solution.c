#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 12 || n == 1 || n == 2)
        printf("Winter\n");
    else if (n >= 3 && n <= 5)
        printf("Spring\n");
    else if (n >= 6 && n <= 8)
        printf("Summer\n");
    else
        printf("Autumn\n");

    return 0;
}
