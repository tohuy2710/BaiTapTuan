#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  string s; cin >> s;
  string t = s;
  reverse(t.begin(), t.end());
  if(t==s){
    cout << "Yes";
  }
  else cout << "No";
  return 0;
}