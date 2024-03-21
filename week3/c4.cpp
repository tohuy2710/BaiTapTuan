#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dx[8] = {-1, 0, +1, -1, +1, -1, 0, 1};
    int n, m; cin >> n >> m;
    char a[100][100];
    int res[100][100] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '*') continue;
            else{
                for(int k = 0; k < 8; k++){
                    int x = i + dx[k], y = j + dy[k];
                    if(x < 0 || x >= m - 1 || y < 0 || y >= n - 1){
                        continue;
                    }
                    else{
                        if(a[x][y] == '*') res[i][j]++;
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '*') cout << '*' << " ";
            else cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}