#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
    double x; //儲存浮點數
    int n; //儲存小數位數
    cout << "請輸入一浮點數: ";
    while(!(cin >> x)){
        cout << "輸入非數字，請重新輸入:";
        cin.clear();
        cin.sync();
        cin >> x;
    }
    cin.clear();
    cin.sync();
    cout << "請輸入此浮點數輸出的小數位數:";
    while(!(cin >> n)){
        cin.clear();
        cin.sync();
        cout << "輸入非數字，請重新輸入：";
        cin >> n;
    }
    cout << endl; //換行
    cout << "輸出結果: " << fixed << setprecision(n) << x << endl << endl;
    return 0;
}
