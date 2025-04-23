#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk panjang garis
    double o, v, j;

    // Input panjang garis
    cout << "Masukkan panjang garis pertama: ";
    cin >> o;
    cout << "Masukkan panjang garis kedua: ";
    cin >> v;
    cout << "Masukkan panjang garis ketiga: ";
    cin >> j;

    // Periksa apakah ketiga garis dapat membentuk segitiga
    if (o + v > j && o + j > v && v + j > o) {
        cout << "SEGI TIGA" << endl;
    } else {
        cout << "BUKAN SEGITIGA" << endl;
    }

    return 0;
}