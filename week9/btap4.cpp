#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    char* a = new char[2];
    cout << "before delete, addess of a: " << &a << endl;
    delete a;
    cout << "after delete, addess of a: " << &a << endl;

    // van o do
    return 0;
}