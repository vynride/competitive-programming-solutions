#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int odd_index = 0, even_index = 0;
    int odds = 0, evens = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens++;
            even_index = i;
        }

        else
        {
            odds++;
            odd_index = i;
        }
    }

    if (odds > evens)
        cout << even_index + 1 << endl;
    
    else
        cout << odd_index + 1 << endl;
}