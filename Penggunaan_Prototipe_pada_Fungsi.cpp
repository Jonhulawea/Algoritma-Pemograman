#include <iostream>
#include <cstring>
using namespace std;

char* komentari(char ket[30], int n);  // prototipe fungsi

int main() {
    char lagi, c[30];
    int i;
    do {
        cout << "Masukkan nilai = ";
        cin >> i;
        komentari(c, i);
        cout << c;
        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');
    return 0;
}

char* komentari(char ket[30], int n) {
    int a = n % 2;
    if (a == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
    return ket;
}

