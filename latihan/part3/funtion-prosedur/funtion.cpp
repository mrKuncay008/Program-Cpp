#include <iostream>
#include <string>

using namespace std;

int hallo(string a, string b) {
	string c;

	if (c == "Mansur")
	{
		c = a + b;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	string kucing1, kucing2;

	cout << "Masukan kucing1; ";
	cin >> kucing1;

	cout << "Masukan kucing2: ";
	cin >> kucing2;

	cout << "Total dari " << kucing1 << "Dan " << kucing2 << "Adalah " << endl;
	cout << hallo(kucing1, kucing2);
	return 0;
}