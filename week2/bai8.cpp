#include<bits/stdc++.h>
using namespace std;

struct point{
    int x, y;
    point(int _x, int _y){
        x = _x;
        y = _y;
    }
    point();
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    point p(3, 5);
    cout << &p.x << endl << &p.y << endl; //la 2 o nho luu tru int sat nhau
    return 0;
}