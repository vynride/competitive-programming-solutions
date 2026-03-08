#include<bits/stdc++.h>
using namespace std;

int main(void) {

    long long fn_m = 0;
    for (int j = 1; j < 100; j++) {
        long long fn = 0;

        for (int i = 1; i <= j; i++) {
            fn += j%i;
        }

        if (fn == fn_m) cout << "Yes" << endl;

        fn_m = fn;
        cout << "n: " << j << " fn: " << fn << endl;
    }

}
