#include <conio.h>
#include <iostream>
using namespace std;

int main(){
	int nilai;
	
	cout << "Angka nilai kuadradnya\n";
	cout << "\n";
	
	for (nilai = 1; nilai <= 10; nilai++){
	cout << nilai << "\t" << (nilai * nilai) << endl;
    getch();
    }
	return 0;
}
