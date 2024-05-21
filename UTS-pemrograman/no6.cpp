#include <iostream>
using namespace std;


void menu() {
    cout << "Pilih operasi:\n";
    cout << "1. Tambah\n";
    cout << "2. Kurang\n";
    cout << "3. Kali\n";
    cout << "4. Bagi\n";
}


void tambah(int a, int b) {
    cout << "Penjumlahan  : " << a + b << endl;
}


void kurang(int a, int b) {
    cout << "Pengurangan  : " << a - b << endl;
}


void kali(int a, int b) {
    cout << "Perkalian    : " << a * b << endl;
}


void bagi(int a, int b) {
    if (b != 0) {
        cout << "Pembagian    : " << a / b << endl;
    } else {
        cout << "Pembagian    : Tidak bisa dibagi dengan 0" << endl;
    }
}

int main() {
    int pilihan, a, b;
    menu();
    cout << "Masukkan pilihan operasi: ";
    cin >> pilihan;

    cout << "Masukkan Angka Pertama : ";
    cin >> a;

    cout << "Masukkan Angka Kedua   : ";
    cin >> b;

    switch (pilihan) {
        case 1:
            tambah(a, b);
            break;
        case 2:
            kurang(a, b);
            break;
        case 3:
            kali(a, b);
            break;
        case 4:
            bagi(a, b);
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}