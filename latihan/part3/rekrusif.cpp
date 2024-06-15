// #include<iostream>
// using namespace std;

// int main()
// {
// 	int ar[10] = {1,4,5,6,8,30,87,34,23,10};

// 	for (int i = 0; i < 10; i++)
// 	{
// 		cout << "Urutan nilai pendek [" <<i<< "] =" << ar[i];
// 		cout << endl;
// 	}
// 	return 0;
// }
// ================================================================

// Penjumlahan Array
#include <iostream>
using namespace std;

int main() {

	int ar[5];
	int tamp = 0;

	cout << " =========================== ";
	cout << "\n PRogram Menjumlahkan Semua Array \n\n";
	cout << " 	===== isi array ====" << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << "isi index ke [" << i << "] = ";
		cin << ar[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		tamp = tamp + ar[i];
	}

		cout << "\n Hasil Penjumlahkan semua elemen Array: " << tamp;

	return 0;
}