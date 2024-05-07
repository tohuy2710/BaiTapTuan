#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* a, int n, int target){
    int l = 0, r = n - 1, m = (l+r)/2;
    while(l <= r){
        m = (l+r)/2;
        int x = a[m];
        if(x < target){
            l = m + 1;
        }
        else if(x > target) r = m - 1;
        else return m;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int* a = new int[10];
    int values[] = {1, 2, 3, 4, 5, 9, 10, 11, 13, 15};
    for (int i = 0; i < 10; ++i) {
        a[i] = values[i];
    }
    cout << binarySearch(a, 10, 11);
    return 0;
}