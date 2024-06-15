#include <iostream>

using namespace std;

int main() 
{ // start
	int nilai;
	string kelulusan;

	cout << "==============  Hasil Kelulusan ==========";
	cout << "\n\nMasukan nilai:  ";
	cin >> nilai;

	// percabangan if/else/if
	if (nilai >= 90)
	{
		kelulusan = "A";
	}
	else if (nilai >= 85)
	{
		kelulusan = "B++";
	}
	else if (nilai >= 80)
	{
		kelulusan = "B";
	}
	else if (nilai >= 76)	// Proses
	{
		kelulusan = "C++";
	}
	else if (nilai >= 70)
	{
		kelulusan = "C";
	}
	else if (nilai >= 60)
	{
		kelulusan = "E";
	}

	else {
		kelulusan = "F";
	}

	// output 
	cout << "kelulusan anda: " << kelulusan << "\n";
	return 0;
}


/* ini adalah percabangan if else
string password;
	// start
	cout << " -------------- Login --------------\n";
	cout << "\n	masukan password 	";
	cin >> password;

	// percabangan if
	if (password == "asuu"){

		cout << "selamat datang asuu !\n";
	} 
	// percabangan else
	else {
		cout << "slahh yooo Silakan coba lagi !\n";

	} 

	cout << "\nTerimaaksih Hati-hati dijalan\n";
		// end */