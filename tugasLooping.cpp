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
void tampilPrima() {
    inputAngka();
    if (cekPrima(n)) {
        cout << n << " adalah bilangan prima." << endl;
    } else {
        cout << n << " bukan bilangan prima." << endl;
    }
}
void tampilFibonacci() {
    inputAngka();
    if (cekFibonacci(n)) {
        cout << n << " termasuk dalam deret Fibonacci." << endl;
    } else {
        cout << n << " bukan bagian dari deret Fibonacci." << endl;
    }
}
void menu() {
    cout << "\n=== MENU PROGRAM ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilihan Anda: ";
}
int main() {
    while (true) {
        menu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilPrima();
                break;
            case 2:
                tampilFibonacci();
                break;
            case 0:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}