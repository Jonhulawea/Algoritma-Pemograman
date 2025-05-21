#include <iostream>
using namespace std;

int main() {
	int i;
	do {
		if (i == 5) {
			continue;
		}
		cout<< i <<"+"<< i <<"="<< (i+i)<<endl;
		i++;
	} while (i <  10);
		
	return 0;
}
	
