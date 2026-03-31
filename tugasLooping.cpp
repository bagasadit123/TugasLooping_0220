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

bool cekFibonacci(int x) {
    int a = 0, b = 1, c;

    if (x == 0 || x == 1) {
        return true;
    }

    while (b <= x) {
        if (b == x) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }

    return false;
}
