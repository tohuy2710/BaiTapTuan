#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N; 
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}