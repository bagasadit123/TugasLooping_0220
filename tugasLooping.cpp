#include <iostream>
using namespace std;

int n;
int pilihan;

void inputAngka() {
    cout << "Masukkan sebuah angka: ";
    cin >> n;
}
bool cekPrima(int x) {
    if (x <= 1) {
        return false;
    }

    int i = 2;
    while (i < x) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}