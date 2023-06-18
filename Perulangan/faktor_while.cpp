#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	cout << "Mauskan angka ";
	cin >> a;

	b = 1;
	for(int i = 1; i <= a; i++) {
	
		b = b * i;
		if(i < a) {
			cout << i << " x ";
		
		} else {
		
			cout << i << " = " << b << endl;
		}
	}
	return 0;
}

/*int main(int argc, char const *argv[])
{
	int a; // var anak ayam

	cout << "Anak ayam turun: ";
	cin >> a;

	do
	{				// pengulangan do while ( a = a - 1, while a lebih besar 1)
		a = a -1;

		cout << "Mati satu tinggal " << a << endl;
	
	} while (a > 1);

	cout << "Mati satu tinggal induknya \n";

	return 0;
}*/

/*int main(int argc, char const *argv[])
{
	int jum;					// menampilkan jumlah deret

	cout << "masukan jumlah: ";
	cin >> jum;

	cout << endl;

	for (int i = 1; i <= jum; ++i)
	{
	
		cout << 0 + i << " ";
	}
	
	cout << "\n";
	return 0;
}*/