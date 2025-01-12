#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, count = 0;
    cin >> n;

    int arr[n][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++)
    {
        int num = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (num == arr[j][1])
                count++;
        }    
    }

    cout << count << endl;
}