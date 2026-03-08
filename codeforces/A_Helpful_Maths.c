#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *num1, const void *num2);

int main(void)
{
    char a[101];
    scanf("%s", a);

    int len = strlen(a);

    int digits[len];
    int p = 0;

    for (int i = 0; i < len; i+=2)
    {
        if (a[i] == '1')
        {
            digits[p] = 1;
            p++;
        }
        else if (a[i] == '2')
        {
            digits[p] = 2;
            p++;
        }
        else if (a[i] == '3')
        {
            digits[p] = 3;
            p++;
        }
    }

    int d_len = p;
    qsort(digits, d_len, sizeof(int), compare);

    printf("%d", digits[0]);

    for (int t = 1; t < d_len; t++)
        printf("+%d", digits[t]);


    return 0;
}


int compare(const void *num1, const void *num2)
{   
    int a = *(int*)num1;
    int b = *(int*)num2;

    if (a > b) 
        return 1;

    else if (b > a)
        return -1;

    else
        return 0;
}