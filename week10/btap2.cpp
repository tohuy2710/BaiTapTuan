#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;
    cout << *p2;
    delete p2; // p và p2 ở cùng 1 địa chỉ ô nhớ, đã delete p nên k còn p2

    return 0;
}