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

void print(point p) {
    cout << p.x << " " << p.y;
}

point midPoint(const point p1, const point p2){
    point res((p1.x + p2.x)/2, (p1.y + p2.y)/2);
    return res;
}

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

    point point1;
    point1.x = 10;
    point1.y = 12;
    print(point1);
    point p1(6,7);
    point p2(2,3);
    print(midPoint(p1, p2));
    return 0;
}