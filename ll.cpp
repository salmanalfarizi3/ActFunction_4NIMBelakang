#include <iostream>
using namespace std;

float d1, d2;

     void input  () {
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
    }

float hitungLuas(float d1, float d2) {
    return 0.5 * (d1 * d2);
}

void output() {
    cout << "Luas belah ketupat adalah: " << hitungLuas(d1, d2) << endl;
}

int main() {
    input();
    output();
    return 0;
}