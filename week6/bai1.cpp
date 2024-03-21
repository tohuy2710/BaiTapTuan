#include<bits/stdc++.h>
using namespace std;

int x, y, m, n, k;
int cntOpen = 0;
int dx[] = {-1,0, 1, -1, 0, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
bool out = 0;
vector<vector<bool>> opened;
vector<vector<bool>> mapBom;
vector<vector<string>> mapGame;

void sinhMap(int k) {
    opened.assign(m, vector<bool>(n, false));
    mapBom.assign(m, vector<bool>(n, false));
    mapGame.assign(m, vector<string>(n, "*"));
    for (int i = 0; i < k; i++) {
        mapBom[rand() % m][rand() % n] = true;
    }
}

void checkBom(int x, int y){
    int cntBom = 0;
    for(int i = 0; i < 8; i++){
        if(((x + dx[i]) < m) && ((x + dx[i]) >= 0) && ((y + dy[i]) < n) && ((y + dy[i]) >= 0)){
            if(mapBom[x+dx[i]][y+dy[i]]) cntBom++;
        }
    }
    mapGame[x][y] = to_string(cntBom);
}

void gameLogic(){
    if(cntOpen == m*n - k){
        cout << "WIN!\n";
        out = 1;
    }
    cout << "nhap toa do : ";
    cin >> x >> y;
    x --; y--;
    if(mapBom[x][y]){
        cout << "YOU ARE DEAD!\n";
        out = 1;
    }
    else{
        checkBom(x,y);
        if(!opened[x][y]){
            cntOpen++;
            opened[x][y];
        }
    }
    for(vector<string> strs : mapGame){
        for(string s : strs){
            cout << s << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> m >> n >> k;
    sinhMap(k);
    while(!out){
        gameLogic();
    }
    
    return 0;
}