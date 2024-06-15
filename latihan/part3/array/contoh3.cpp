#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int nomer[999];

	int jumlah, a, c;
	cout << "------------ contoh array 3 -----------\n";
	cout << "berapa nomer yang ingin di keluarkan : ";
	cin >> a;
	cout << "memnentukan nomer yang lebih besar ";
	cin >> c;

	for (int b = 0;b < a; b++)
	{
		cin >> nomer[b];
		if (nomer [b] > c)  //untuk mengecek nilai yang ada didalam array lebih dari c
			jumlah++;
		cout << " \n"<< jumlah;
	}
}