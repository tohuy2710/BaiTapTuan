#include<bits/stdc++.h>
using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int* a = new int[10];
    int values[] = {1, 2, 3, 4, 5, 9, 10, 11, 13, 15};
    for (int i = 0; i < 10; ++i) {
        a[i] = values[i];
    }

    cout << count_even(a, 5) << endl;
    cout << count_even(a + 5, 5);

    delete[] a; 
    return 0;
}