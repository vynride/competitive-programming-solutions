#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    char max[m];
    for (int i = 0; i < m; i++){max[i] = '0';}
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];

            if (arr[i][j] > max[j]){
                max[j] = arr[i][j];
            }
        }
    }
        
    int count = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == max[j]){
                count++;
                break;
            }

        }
    }
 
   cout << count << endl;
}
