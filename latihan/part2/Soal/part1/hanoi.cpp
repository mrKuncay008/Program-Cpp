#include <iostream>
using namespace std;

long int towerhanoi(int jumlahcakram, asal, tujuan, sisa );
int main()
{
	int jumlahcakram, asal, tujuan, sisa;
	cout << " --------- Tower of hanoi -----\n";
	cout << "masukan asal: \n";
	cin >> asal;
	cout << "masukan tujuan: \n";
	cin >> tujuan;

	cout<<"Pindahkan cakram 4 dari "<< asal <<" ke "<< tujuan << "\n";
}

long int towerhanoi(int jumlahcakram, asal, tujuan, sisa){
	 if (jumlahcakram == 1)
		 return 1;
		 else
                 return x * towerhanoi(jumlahcakram-1, asal, sisa, tujuan);
}
