#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int low = 1;
    int high = 1000000;

    int guess = low + (high - low + 1) / 2;;

    while (low < high)
    {
        guess = low + (high - low + 1) / 2;
        cout << guess << '\n';
        fflush(stdout);

        string res;
        cin >> res;

        if (res[0] == '<')
        {
            high = guess - 1;
        }

        else
        {
            low = guess;
        }
    }

    cout << "! " << low << endl;
}
