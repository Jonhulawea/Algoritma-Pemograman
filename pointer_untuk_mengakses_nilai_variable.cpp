#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "Nilai variabel num: " << num << endl;
    cout << "Alamat memori variabel num: " << &num << endl;
    cout << "Nilai yang ditunjuk oleh pointer: " << *ptr << endl;
    cout << "Alamat memori yang ditunjuk oleh pointer: " << ptr << endl;

    *ptr = 20; 

    cout << "Nilai variabel num setelah perubahan: " << num << endl;
    cout << "Nilai yang ditunjuk oleh pointer setelah perubahan: " << *ptr << endl;

    return 0;
}
