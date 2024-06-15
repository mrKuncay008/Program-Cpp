#include <iostream>

using namespace std;

int jaribola(int jari) {
	int volume;
	volume = jari * jari * jari * 22 / 7 * 4 / 3;
	return volume;
}

int main(int argc, char const *argv[])
{
	int a;

	cout << "Masukkan jari-jari bola: ";
	cin >> a;
	cout << endl;
	cout << "/////////////\n";

	cout << "Volume jari-jari Bola adalah: " << jaribola(a); 
	return 0;
}