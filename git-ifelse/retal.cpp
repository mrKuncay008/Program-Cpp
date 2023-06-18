#include <iostream>

using namespace std;

int main(void)
{
    int j, m, d, msk, klr, tot, biaya; // variable

    struct // tipe data struktur
    {
        int jam, menit, detik;
    }masuk;
    
    struct 
    {
        int jam, menit, detik;
    }keluar;

    // proses
    cout << " ######## ------------ ########\n";
    cout << "----------- rental ps -------\n\n";
    cout << "Masukan waktu masuk ( Format 24 jam )\n";
    cout << "jam: ";
        cin >> masuk.jam; cout << "\n";
    cout << "menit: ";
        cin >> masuk.menit; cout << "\n";
    cout << "detik: ";
        cin >> masuk.detik; cout << "\n";

    cout << "Masukan waktu keluar ( Format 24 jam )\n";
    cout << "jam: ";
        cin >> keluar.jam; cout << "\n";
    cout << "menit: ";
        cin >> keluar.menit; cout << "\n";
    cout << "detik: ";
        cin >> keluar.detik; cout << "\n";    

    if (masuk.jam > keluar.jam)
        {
            msk = masuk.jam * 3600 + masuk.menit * 60 + masuk.detik;
            klr = 24 + keluar.jam * 3600 + keluar.menit * 60 + keluar.detik;
            tot = klr - msk;
            j = (tot / 3600);
            m = (tot % 3600 / 60);
            d = (tot % 3600 % 60);
            cout << "Waktu rental anda adlah: " << j << m << d << "\n";

            biaya = ((double) tot / 3600 * (double) 5000);
            cout << "Biaya nya adalah: " << (biaya + 1);
        }
        else {
            msk = masuk.jam * 3600 + masuk.menit * 60 + masuk.detik;
            klr = keluar.jam * 3600 + keluar.menit * 60 + keluar.detik;
            tot = klr - msk;
            j = (tot / 3600);
            m = (tot % 3600 / 60);
            d = (tot % 3600 % 60);
            cout << "Waktu rental anda adlah: " << j << ":" << m << ":" << d << "\n";

            biaya = ((double) tot / 3600 * (double)5000);
            cout << "Biaya nya adalah: RP." << (biaya + 1);   
        }
    return 0;
}
