#include <stdio.h>
#include <stdlib.h>

int compare(const void *num1, const void *num2);
int sum(int arr[], int size, int start_index, int end_index);

int main(void)
{
    int n; 
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    int current = 0, coins = 0, leftover = 0;
    int total_sum = sum(arr, n, 0, n);

    while (current <= leftover && coins <= n)
    {
        coins++;
        current = sum(arr, n, 0, coins);
        leftover = total_sum - current;
    }

    printf("%d\n", coins);
}

// Helps sort array in desc order to get more valueable coins before
int compare(const void *num1, const void *num2)
{
    int a = *(int *)num1;
    int b = *(int *)num2; 

    if (a > b)
        return -1;

    else if (a < b)
        return 1;

    else
        return 0;
}

// Returns sum of array elements in the range [start_index, end_index)
int sum(int arr[], int size, int start_index, int end_index)
{
    int sum = 0;
    for (int i = start_index; i < end_index; i++)
    {
        sum += arr[i];
    }

    return sum;
}