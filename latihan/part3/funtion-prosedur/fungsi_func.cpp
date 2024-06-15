#include <iostream>

using namespace std;

// deklarasi fungsi

int tambah(int a, int b) {
	cout << "Masukan a: ";
	cin >> a;
	cout << "Masukan b: ";
	cin >> b;

	return a + b;
}

int kurang (int c, int d) {
	cout << "Masukan c: ";
	cin >> c;
	cout << "Masukan d: ";
	cin >> d;

	return c - d;
}

int kali (int e, int f) {

	return e * f;
}

int bagi (int g, int h) {

	return g / h;
}

// bagian main

int main(int argc, char const *argv[])
{
	cout << "--------- Program Fungsi -----------\n";

	int pilih;
	
	do {
		cout << endl;
		cout << "1. Perjumlahan \n";
		cout << "2. Perkurangan \n";
		cout << "3. Perkalian \n";
		cout << "4. Pembagian \n";
		cout << "5. Exit";
		cout << "SIlakan dipilih: ";
		cin >> pilih;
		system("clear");
		
		if (pilih == 1)
		{
			cout << tambah(0,0) << endl;
		}

		else if (pilih == 2)
		{
			cout << kurang(0,0) << endl;
		}

		else if (pilih == 3)
		{
			cout << kali(2,3) << endl;
		}

		else if (pilih == 4)
		{
			cout << bagi(4,2) << endl;
		}
		
	} while (pilih != 5);
	
	return 0;
}