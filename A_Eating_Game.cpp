#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int>arr(n);
        unordered_map<int, int>freqmap;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freqmap[arr[i]]++;

            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        cout << freqmap[maxi] << '\n';
    }
}
