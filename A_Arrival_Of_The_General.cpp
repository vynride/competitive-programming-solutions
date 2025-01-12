#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    int tallest = 0, tallest_index = 0, shortest = 101, shortest_index = 0, n_minus_one = n - 1, temp, count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > tallest)
        {
            tallest = arr[i];
            tallest_index = i;
        }

        if (arr[i] <= shortest)
        {
            shortest = arr[i];
            shortest_index = i;
        }
    }

    if (tallest_index > shortest_index)
        cout << tallest_index + n - shortest_index - 2 << endl;

    else
        cout << tallest_index + n  - 1 - shortest_index << endl;
}