#include <iostream>

using namespace std;

int main()
{

    // Program sigma ganda

    int atas1, atas2, hit, hasil, total;

    cout << "masukan sigma atas 1: ";
    cin >> atas1;
    cout << "Masukan sigma atas 2: ";
    cin >> atas2;

    total = 0;

    for(int i = 1; i <= atas1; i++) {
          
          hasil = 0;

    for(int j = 2; j <= atas2; j++) {
            
            hit = i + j;
            
            hasil = hasil + hit;
            
            cout << "hitungan: " << hit << endl;
            cout << "Hasilnya: " << hasil << endl;
        }
        total = total + hasil;
    }
        cout << total << endl;

    return 0;
}