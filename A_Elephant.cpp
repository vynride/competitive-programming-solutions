#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;
    cin >> x;

    int arr[] = {5, 4, 3, 2, 1};
    int steps = 0, i = 0;

    while (x != 0){
        
        steps += x / arr[i];
        x = x % arr[i];

        i++;
    }

    cout << steps << endl;
}