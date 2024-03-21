#include<bits/stdc++.h>
using namespace std;

struct ship{
    rect r;
    string id;
    int dx, dy;
    ship(rect _r, string _id, int _dx, int _dy){
        r = _r;
        id = _id;
        dx = _dx; 
        dy = _dy;
    }
    void move(){
        r.x += dx;
        r.y += dy;
    }
};

void display(const ship& ship){
    cout << ship.id << " " << ship.r.x << " " << ship.r.y << endl;
}
struct rect{
    int x, y, w, h;

    rect(int _x, int _y, int _w, int _h){
        x = _x; y = _y; w = _w; h = _h;
    }
    rect();
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x, y, z, t, dx, dy;
    string s;
    cin >> x >> y >> z >> t;
    rect r(x,y,z,t);
    cin >> s >> dx >> dy;
    ship shp(r, s, dx, dy);
    display(shp);
    cout << endl;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        shp.move();
        display(shp);
    }
    return 0;
}