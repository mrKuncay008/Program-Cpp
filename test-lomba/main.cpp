#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int A, B, C, D;
	
	cout << "Masukan angka sesuai soal: " << endl; // masukan angka dengan sepasi lalu enter
	while (cin >> A >> B >> C >> D ) {
		int pecahan1 = A * D;
		int pecahan2 = B * C;
			
			if(pecahan1 == pecahan2) {
				cout << "Sama" << endl << endl;
			} else if (pecahan1 > pecahan2) {
				cout << "Lebih Besar" << endl << endl;
			}
			else{
				cout << "Lebih Kecil" << endl << endl;
			}
	}
	return 0;
}
