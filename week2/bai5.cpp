#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        if(isPrime(i)) cout << i << " ";
    }
    return 0;
}