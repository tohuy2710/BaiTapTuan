#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<int> vt;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        vt.push_back(i);
    }
    for(int i = 0; i < n; i++){
        for(auto x : vt){
            cout << x << " ";
        }
        cout << endl;
        vt.push_back(vt[0]);
        vt.erase(vt.begin());
    }
    return 0;
}