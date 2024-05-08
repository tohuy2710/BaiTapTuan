#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if (b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    cout << GCD(a,b);
    
    return 0;
}