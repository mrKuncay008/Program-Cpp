#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int pilih, nilai;

	cout << "---------- bilanagn ganji 1 - 100 ----------\n";

	cout << "masukan pilihan 1. Ganjil, 2.Genap ";
	cin >> pilih;
	cout << "Maskan Nilai: ";
	cin >> nilai;

	if (pilih == 1)
	{
		cout << "#### ini adalah bilangan ganjil ####\n";
		for (int i = 1; i <= nilai; i++)
		{
			if (i % 2 !=0)
			cout << i << " "<< endl;;
		} 
	 } else
		{
			cout << "### Ini adlah bilangan genap ####\n";
			for (int i = 1; i <= nilai; i++)
			{
			if (i % 2 !=0)
			cout << i << " " << endl;
			}
		}
		
	return 0;
		
	}
	


/* membuat int awal, akhir, nilai
   ipunt awal, akhir
   proses
   		int nilai= awal;
   		while nilai <= akhir
   		nilai++ 
   jika nilai % 2 terbalik = 0
   tampilkan nilai

 */