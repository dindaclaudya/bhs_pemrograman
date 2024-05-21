#include <iostream>
using namespace std;

int main() {
    int angka_pertama, angka_kedua;

    cout << "Masukkan Angka Pertama : ";
    cin >> angka_pertama;

    cout << "Masukkan Angka Kedua   : ";
    cin >> angka_kedua;

    int penjumlahan = angka_pertama + angka_kedua;
    int pengurangan = angka_pertama - angka_kedua;
    int perkalian = angka_pertama * angka_kedua;
    int pembagian = angka_pertama / angka_kedua;

    cout << "Penjumlahan  : " << penjumlahan << endl;
    cout << "Pengurangan  : " << pengurangan << endl;
    cout << "Perkalian    : " << perkalian << endl;
    cout << "Pembagian    : " << pembagian << endl;

    return 0;
}