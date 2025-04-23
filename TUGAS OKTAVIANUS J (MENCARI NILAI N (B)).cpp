#include <iostream>
using namespace std;

int main() {
    int N, A;

    // Input nilai N dan A
    cout << "Masukkan nilai N: ";
    cin >> N;
    cout << "Masukkan nilai A: ";
    cin >> A;

    // Periksa apakah A > 50
    if (A > 50) {
        N = N + 10;
    }
    // Tambah N dengan 10 (selalu dilakukan setelah percabangan)
    N = N + 10;

    // Output hasil
    cout << "Nilai akhir N: " << N << endl;

    return 0;
}
