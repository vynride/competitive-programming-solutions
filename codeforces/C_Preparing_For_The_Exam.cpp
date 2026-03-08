#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];

        int q[k];
        for (int i = 0; i < k; i++)
			cin >> q[i];
		
        if (k == n)
        {
            for (int i = 0; i < m; i++)
                cout << 1;

            cout << endl;
            continue;
        }   

        if (n-k != 1){

            for (int i = 0; i < m; i++)
                cout << 0;

            cout << endl;
            continue;
        }
 
		int not_known = k + 1;
		for (int i = 0; i < k; i++){
			if (q[i] != i+1)
			{
				not_known = i+1;
				break;
			}
		}
		
		for (int i = 0; i < m; i++)
		{
			if (a[i] == not_known)
				cout << 1;
			
			else
				cout << 0;
		}

        cout << endl;
    }
}
