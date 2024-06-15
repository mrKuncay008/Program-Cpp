#include <iostream>

using namespace std;

int main() {
    // Program sigma tunggal
/* atas 3 Sigma i = 1 (2 i + 1 kuadrat2)
    = (2.1 + 1 kuadrat2)
        + (2.2 + 2 x 2 (kuadrat2))
        + (2.3 + 3 x 3 (kuadrat2)) = 3 + 8 + 15 = 26
*/
    int atas, hit, hasil;

    cout << "Masukan batas atas: ";
    cin >> atas;

    hasil = 0;
    for (int i = 1; i <= atas; i++)
    {
        hit = (2*i) + (i*i);
        hasil= hasil + hit;
        cout << "hituangnya: "<< hit << "\n";
        cout << "hasilnya: " << hasil << "\n";
    }
    cout << "\n";
    cout << "jadi hasilnya adalah = " << hasil << "\n";

    return 0;
}