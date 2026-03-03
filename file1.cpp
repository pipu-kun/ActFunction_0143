#include <iostream>
using namespace std;

int p, l, luas;

void input() {
    cout << "masukan panjang: " << endl;
    cin >> p;
    cout << "masukan lebar: " << endl;
    cin >> l;
}

int luasPersegi() {
    return p * l;
}

void output(){
    cout << "hasilnya = " << luasPersegi() << endl;
    cout << "terimakasih";
}

int main(){
    input();
    output();
}