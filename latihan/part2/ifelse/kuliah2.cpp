#include <iostream>
using namespace std;

int main()
{
	int ipa, ips;
    int fisika, kimia, biologi;
    int sosiologi, ekonomi, sejarah;
	cout << "masukan nilai fisika: ";
	cin >> fisika;
    cout << "masukan nilai kimia: ";
	cin >> kimia;
    cout << "masukan nilai biologi: ";
	cin >> biologi;
    cout << "\n";
    cout << "masukan nilai sosioligi: ";
	cin >> sosiologi;
	cout << "masukan nilai ekonomi: ";
	cin >> ekonomi;
	cout << "masukan nilai sejarah: ";
	cin >> sejarah;

    ipa = fisika, kimia, biologi;
	ips = sosiologi, ekonomi, sejarah;

    if (ipa > ips)
    {
        cout << "anda lebih cocok di ipa coy !";
    }
    else
    {
        cout << "anda tidak cocok di ipa Tapi di ips ";
    }
    return 0;
}
