#include<iostream>
#include<string> 
using namespace std;

char a_str1[3];
char b_a_1[5] = {"abcd"};
// char b_a_2[4] = {"abcd"}; lỗi
// char b_a_3[3] = {"abcd"}; lỗi

char c_1[] = {"abcd"};
int main(){
    char a_str2[3];
    cout << "in tung ki tu a_str1: ";
    for(auto x : a_str1) cout << x;
    cout << "end" << endl;
    // cout << "in tung ki tu a_str2: "; lỗi
    // for(auto x : a_str2) cout << x;
    // cout << "end" << endl;

    cout << "in xau ki tu: str1: " << a_str1 << " str2: " << a_str2 << endl;
    
    cout << "in tung ki tu b_a_1: ";
    for(auto x : b_a_1) cout << x;
    cout << endl;
    cout << "int xau ki tu b_a_1: " << b_a_1 << endl;

    char c_2[] = {"abcd"};

    cout << "size c_1: " << sizeof(c_1) << endl << "size c_2: " << sizeof(c_2); 
    //size c_1 = 5, size c_2 = 5

    //Mang kich thuoc n luu duoc string size toi da la (n - 1)
    return 0;
}