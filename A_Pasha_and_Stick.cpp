#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;

    if (n % 2 != 0)
        printf("0\n");

    else
    {
        long long t = n / 2;
        int count;

        if (t % 2 == 0)
            count = (t/2) - 1;

        else
            count = (t/2);

        cout << count << endl;
    }
}

/*
For a rectangle the sides we choose should be equal pairs [(1,1) (3,3)] however both pairs
should not be equal pairs [(4,4) (4,4)] as that would make it a square.

The sum of the sides be L (Length of stick)
L = (side1 + side2 + side3 + side4)

But, side1 = side2 & side3 = side4
L = 2 * (sum of distict pair)

So we have to find count of distinct numbers that add upto L/2.

If:
L/2 is odd: 
The number of distinct numbers will be L/4 (not including 0)
E.g. For L = 14: L/2 = 7: L/4 = 3 
So the distinct numbers will be [(1, 6), (2, 5), (3, 4)] (not (0, 7))

L/2 is even:
The number of distinct numbers will be L/4 - 1 (not including (0))
E.g. For L = 16: L/2 = 8: L/4 = 4
So the distinct numbers will be [(1, 7), (2, 6), (3, 5)] (not including (0, 8) and (4, 4))

*/