#include <iostream>
#include <string>
using namespace std;

int main(){
    char daytab_cach1[2][12] = {
        {31,28,31,30,31,30,31,30,31,30,31},
        {31,29,31,30,31,30,31,30,31,30,31}
    };  
    
    char daytab_cach2[2][12] = {
        31,28,31,30,31,30,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    }; 


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << static_cast<int>(daytab_cach1[i][j]) << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << static_cast<int>(daytab_cach2[i][j]) << " ";
        }
        cout << endl;
    }
        //phan B:
    // o cach1: khi xoa se them 0 vao cuoi dong. | o cach2: khi xoa se them 0 vao cuoi mang.
        //phan C:
    // o cach1: [o nay bo duoc][o nay ko bo duoc] , khong bo duoc 2 o  
    // o cach2: nhu cach 1
    return 0;
}
