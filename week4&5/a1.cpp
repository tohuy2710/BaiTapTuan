#include <bits/stdc++.h>
using namespace std;

//int a[];
//int a[2] = {1, 2, 3, 4}; // lỗi
//int a[10] = {1, 2, 3, 4};
int a[] = {1, 2, 3, 4};

int main()
{
    //int a[];
    //int b[10] = {1, 2, 3, 4};  //độ rộng = 10, số phần tử = 4
    int b[] = {1, 2, 3, 4};
    for (int i = 0; i < 10; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    for (auto x : a) cout << x << " ";
    return 0;
}
