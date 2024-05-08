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
struct rect{
int x, y, w, h;

rect(int _x, int _y, int _w, int _h){
    x = _x; y = _y; w = _w; h = _h;
}
rect();
bool contains(point p){
    int px = p.x, py = p.y;
    if(px >= x && px <= x + h && py >= y && py <= y + h) return 1;
    return 0;
}


};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x, y, w, h; cin >> x >> y >> w >> h;
    rect r(x,y,w,h);
    cin >> x >> y;
    point p(x, y);
    cout << r.contain(p);
    return 0;
}