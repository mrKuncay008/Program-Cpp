#include <iostream>
using namespace std;

int main()
{
	float luas, jari2;
	const float phi = 3.14;

	cout << "-----------------------\n";
	cout << "PROGRAM MENGHITUNG JARI-JARI\n";
	cout << "-------------------------\n";

	cout << "masukan panjang jari-jari lingkaran: ";
	cin >> jari2;
	
	luas = phi*jari2*jari2;

	cout << "\nLuas lingkaran adalah " << luas <<"\n";
	return 0;
}
