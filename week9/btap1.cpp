#include<bits/stdc++.h>
using namespace std;

char* concat(const char* s1, const char* s2){
    char* res = new char[strlen(s1) + strlen(s2) + 1];
    strcpy(res, s1);
    strcpy(res + strlen(s1), s2);
    
    for(int i = 0; i < strlen(res); i++){
        cout << res[i];
    }
    
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    concat("hello", "world");
    return 0;
}