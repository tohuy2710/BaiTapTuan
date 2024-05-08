#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int tmp, pre; cin >> tmp;
    pre = tmp;
    cout << tmp << " ";
    while(tmp >= 0){
        cin >> tmp;
        if(tmp != pre){
            cout << tmp << " ";
        }
        pre = tmp;
    }
    return 0;
}