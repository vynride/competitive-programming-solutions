#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr, arr+m);
    int min = arr[n - 1] - arr[0];

    for (int i = 0; i < m - n + 1; i++)
    {
        if (min > arr[i + n - 1] - arr[i])
            min = arr[i + n - 1] - arr[i];
    }

    cout << min << endl;
}