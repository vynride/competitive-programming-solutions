#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int m = 0, s = 0;
        bool one_day = false;
        for (int i = 0; i < n - 1; i++){
            if (a[i] > b[i + 1])
            {
                one_day = true;
                m += a[i];
                s += b[i + 1];
            }
        }

        m += a[n - 1];

        cout << m - s << endl;


    }


}