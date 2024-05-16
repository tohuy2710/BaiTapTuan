#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a[30];
    for(int i = 0; i < 30; i++){
        a[i] = rand()%100 + 1;
        cout << a[i] << " ";
    } cout << endl;
    bubbleSort(a, 30);
    for(int i = 0; i < 30; i++){
        cout << a[i] << " ";
    }
    return 0;
}