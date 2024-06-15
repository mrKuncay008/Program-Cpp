#include <iostream>
using namespace std;

int main ()
{
	int kehadiran, uts, uas, tugas, hasil;
	cout << "masukan nilai uts: ";
	cin >> uts;
	cout << "masukan nilai uas: ";
        cin >> uas;
	cout << "masukan jumlah kehadiran : ";
        cin >> kehadiran;
	cout << "masukan nilai tugas: ";
        cin >> tugas;
	cout << "\n";

	hasil = 0.3 / uts + 0.3 / uas + kehadiran;
	cout << "### hasil nya ###\n\n";
	cout << hasil << " :";

	if (hasil >= 75 )
	{
		cout << "lulus !!\n";
	}
	
	else {
		cout << " maaf Ngulang tahun depan\n";
	}
 	return 0;
}
