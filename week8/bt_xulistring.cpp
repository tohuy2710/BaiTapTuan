#include<bits/stdc++.h>
using namespace std;

struct String{
    int n;
    char* str;

    String(const char* s){
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    ~String(){
        delete[] str;
    }

    void print(){
        for(int i = 0; i < n; i++){
            cout << str[i];
        }
    }
    void append(const char* s2){
        char* tmp = new char[n + 1 + (int)strlen(s2)];
        strcpy(tmp, str);
        strcpy(tmp + n, s2);
        delete[] str;
        str = tmp;
        n = strlen(str);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    String t = String("Hello");
    t.print(); cerr << '\n';
    t.append(" world");
    t.print();
    return 0;
}
