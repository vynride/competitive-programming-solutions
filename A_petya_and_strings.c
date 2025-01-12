#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[101];
    scanf("%s", a);
    char b[101];
    scanf("%s", b);

    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }

        if (b[i] >= 65 && b[i] <= 90)
        {
            b[i] = b[i] + 32;
        }

        if (a[i] > b[i])
        {
            printf("1\n");
            return 0;
        }

        else if (a[i] < b[i])
        {
            printf("-1\n");
            return 0;
        }
    }

    printf("0\n");
    return 0;

}