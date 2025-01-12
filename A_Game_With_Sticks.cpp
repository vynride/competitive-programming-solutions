#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int lesser = (n > m) ? m:n;

    (lesser % 2 == 0) ? (cout << "Malvika" << endl) 
                      : (cout << "Akshat" << endl);

}