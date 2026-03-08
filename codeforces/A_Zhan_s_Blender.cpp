#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x, y, result;
        cin >> n;
        cin >> x >> y;

        if (x > y)
        {
            if (n % y == 0)
                printf("%d\n", n/y);
            else
                printf("%d\n", n/y + 1); 
        }

        else
        {
            if (n % x == 0)
                printf("%d\n", n/x);
            else
                printf("%d\n", n/x + 1); 
        }
    }
}