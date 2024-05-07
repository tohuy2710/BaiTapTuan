#include<bits/stdc++.h>
using namespace std;

int p(const char* s1, const char* s2){
    int n = strlen(s1), cnt = 0;
    char* tmp = new char[n + 1];
    for(int i = 0; i < strlen(s2); i++){
        tmp = strncpy(tmp, s2 + i, n);
        tmp[n] = '\0';
        if(strcmp(s1, tmp) == 0) cnt++;
    }
    delete[] tmp;
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    const char* s1 = "AB";
    const char* s2 = "ABbaABcdeAB";
    cout << p(s1, s2);
    return 0;
}