#include <iostream>
#include <string>
using namespace std;

int main(){
    char a[5] = {"abcd"};
    // cout << a[-1] loi
    std::cout << "a[5]: " << a[5] << endl; 
    // in ra ki tu khac nhau moi lan chay, co lan ko in ra, chuong trinh dung dot ngot
    std::cout << "a[6]: " << a[6] << endl; // rong
    a[-1] = 'e'; a[6] = '6', a[5] = '5';
    std::cout << "a[-1]: " << a[-1] << " " << "a[5]: " << a[5] << " " << "a[6]: " << a[6] << endl;
    //in duoc va in dung ki tu duoc gan


    int arr[3][4] = {0};  
    for(int j = 0; j < 6; j++){
        arr[0][j] = j + 1; 
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << endl;
    }

    //mang 2 chieu la cac mang 1 chieu xep lien tiep
}