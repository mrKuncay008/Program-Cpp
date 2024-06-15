#include<iostream>	
using namespace std;

int main()
{
	
	int baris, x, i ; // ini adalah variable input
	
	cout << "masukan jumlah baris: "; // tampilan permintaan jumlah
	
	cin >> baris; // membaca variable input
	
	for (i = baris; i >= 1; i--) // proses var i lebih sama dengan
	
	{
		for (x = i; x < baris; x++) // proses var x kurang dari var baris 
			cout << "*"; // menampilkan * 
		cout << "\n"; // menampilkan * unutk spasi kebawah
	}
	
	return 0;
}

/*-----------------------------------/
		start
	
	pi = baris, x,i,j
	menampilkan jumlah baris
	input baris
	dari i = baris, i lebihsamadengan 1
	dari x = i, x kuranglebih baris 
	tamplikan *

		end
		
*-------------------------------------*/