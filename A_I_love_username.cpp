#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    int amazing = 0;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int best = arr[0], worst = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > best)
        {
            best = arr[i];
            amazing++;
        }
        
        else if (arr[i] < worst)
        {
            worst = arr[i];
            amazing++;
        }
    }
    
    cout << amazing<< endl;
}