#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i < sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}