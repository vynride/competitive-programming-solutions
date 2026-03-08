#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long k, n, w;
    cin >> k >> n >> w;
    
    long long total_cost = k * ((w*(w+1))/2);
    
    if (n - total_cost >= 0)
        cout << 0 << endl;
    else
        cout << total_cost - n << endl;
}