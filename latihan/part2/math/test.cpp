#include <iostream>

using namespace std;

int main()
{

// Program faktorial matematika
// 3! = 1 x 2 x 3 = 1 x 2 = 2 x 3 = 6 jadi 3! = 6
    int angka, hasil;

    cout << "masukan angka: ";
    cin >> angka;

    hasil = 1;
    for (int i = 1; i <= angka; i++)
    {
        hasil = hasil * i;
        cout << hasil << endl;
    }
    
    cout << endl;
    cout << hasil << endl;

}