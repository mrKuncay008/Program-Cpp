#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

	cout << " ## ----- Program mncari nilai terkecil ----- ##\n\n";

	int inputan[100], arr_count, i, main;
	cout << " input number array: ";
	
	cin >> arr_count;

	cout << "input "<< arr_count << " angka di pisah  \n";

	// menyimpan angka setiap yang di input dealam array
	for (int i = 0; i < arr_count; ++i)
	{
		cin >> inputan[i];
	}

	cout << "\n";

	main = inputan[0];		// prorses mencari array terkecil

	for (int i = 0; i < arr_count; i++)
	{
		if (inputan[i] < main)
		{
			main = inputan[i];
		}
	}

	cout << "angka terkecil nya adalah  " << main << "\n";
	return 0;
}

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	cout << " ## ----- Program mncari nilai terbesar ----- ##\n\n";

	int inputan[100], arr_count, i, main;
	cout << " input number array: ";
	cin >> arr_count;

	cout << "input "<< arr_count << " angka di pisah  \n";

	// menyimpan angka setiap yang di input dealam array
	for (int i = 0; i < arr_count; ++i)
	{
		cin >> inputan[i];
	}

	cout << "\n";

	main = inputan[0];		// prorses mencari array terkecil

	for (int i = 0; i < arr_count; i++)
	{
		if (inputan[i] > main)
		{
			main = inputan[i];
		}
	}

	cout << "angka terbesar nya adalah  " << main << "\n";
	return 0;
}*/