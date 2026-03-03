#include <iostream>
using namespace std;

float r;

void input() {
    cout << "masukan jari-jari: "<< endl;
    cin >> r;
}

float luas(float b) {
    return 3.14159 * b * b;
}

void output() {
    cout << "hasil: " << luas(r) << endl;
}

int main(){
    input();
    output();
}