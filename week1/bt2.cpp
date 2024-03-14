#include<bits/stdc++.h>
using namespace std;

int N;

void print(int i){
    for(int j = 0; j < N - i; j++){
        cout << ' ';
    }
    for(int j = 0; j < i; j++){
        cout << '*';
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    N = n;
    for(int i = n; i > 0; i--){
        print(i);
    }
    return 0;
}