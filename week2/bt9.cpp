#include<bits/stdc++.h>
using namespace std;

struct point{
    int x, y;
    point(int _x, int _y){
        x = _x;
        y = _y;
    }
    point(){
        x = 0; y = 0;
    }
};


void passByValue(point p){
    point tmp(1,1);
    p = tmp;
    cout << "pass by value: " << &tmp << " " << &p << endl;
}

void passByReference(point &p){
    cin >> p.x >> p.y;
    cout <<"pass by reference: " << &p.x << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    point p;
    cout << &p.x << endl;
    passByReference(p);
    passByValue(p);
    
    return 0;
}