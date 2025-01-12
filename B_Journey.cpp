#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--){
        long long arr[3];
        long long n;
        cin >> n >> arr[0] >> arr[1] >> arr[2];

        int x = 0;

        long long per_cycle = arr[0] + arr[1] + arr[2];
        long long days = 0;

        if (n >= per_cycle){
            days = 3 * (n / per_cycle);
        }

        long long sum = (per_cycle * days)/3;
        long long left = n % per_cycle;

        if (left != 0){
            while (sum < n){
                sum += arr[x];

                days++;
                x++;
                if (x > 2)
                    x = 0;
            }
        }

        cout << days << endl;
    }
}