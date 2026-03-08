#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int n = s.size(), i = 0;
    while (i < n)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            cout << " ";
            i+=3;

            while (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
                i+=3;
        }

        else
        {
            cout << s[i];
            i++;
        }
    }
}
