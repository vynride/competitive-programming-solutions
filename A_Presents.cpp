#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (arr[j] == i)
                cout << j << " ";
    }
}