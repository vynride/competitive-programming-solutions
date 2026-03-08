#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	
	while (t--) {
		int n; cin >> n;
		
		vector<int>a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		if (a[0] == -1 && a[n - 1] == -1) {
			cout << 0 << '\n';
			for (int i = 0; i < n; i++) {
				if (a[i] == -1) 
					cout << 0 << " ";
				else
					cout << a[i] << " ";
			}
			cout << '\n';
		}
		
		else if (a[0] == -1 && a[n - 1] != -1) {
			cout << 0 << endl;
			cout << a[n - 1] << " ";
			for (int i = 1; i < n; i++) {
				if (a[i] == -1)
					cout << 0 << " ";
				else 
					cout << a[i] << " ";
			}
			cout << '\n';
		}
		
		
		else if (a[0] != -1 && a[n - 1] == -1) {
			cout << 0 << endl;
			for (int i = 0; i < n - 1; i++) {
				if (a[i] == -1)
					cout << 0 << " ";
				else
					cout << a[i] << " ";
			}
			cout << a[0]; 
			cout << '\n';
		}
		
		else {
			cout << abs(a[n - 1] - a[0]) << '\n';
			for (int i = 0; i < n; i++) {
				if (a[i] == -1) 
					cout << 0 << " ";
				else
					cout << a[i] << " ";
			}
			
			cout << endl;
		}
	}
}
