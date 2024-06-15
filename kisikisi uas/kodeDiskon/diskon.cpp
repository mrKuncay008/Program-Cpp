#include <iostream>

#include <string>

using namespace std;

int main(int argc, charconst * argv[]) {
    string namakomp;
    int idKomp, pilih;
    int harga;
    char kodecomp;

    cout << "Selamat datang di prenCOmputer" << endl;
    cout << "1. hardisk" << endl;
    cout << "2. CPU" << endl;
    cout << "silakan pilih: ";
    cin >> pilih;

    if (pilih == 1) {
        namakomp = "hardisk";
        idKomp = 01;
        harga = 400000;
    } else if (pilih == 2) {
        namakomp = "CPU";
        idKomp = 02;
        harga = 600000;
    }
    cout << "\t ////// INVOICE PENJUALAN //////" << endl;
    cout << "\t anda membeli " << namakomp << endl;
    cout << "\t No ID Barang " << idKomp << endl;
    cout << "\t Dengan harga Rp." << harga << endl;
    cout << "\t ---------------------------------" << endl;

    cout << "Apa ada kode diskon? jika ada masukan kode diskon: ";
    cin >> kodecomp;

    if (kodecomp == 'S') {
        harga = 200000;

        cout << "\n\t ////// INVOICE PENJUALAN //////" << endl;
        cout << "\t anda membeli " << namakomp << endl;
        cout << "\t No ID Barang " << idKomp << endl;
        cout << "\t Dengan harga Rp." << harga << endl;
        cout << "\t ---------------------------------" << endl;

    } else {
        cout << "Maaf Blum ada diskon || Terimakasihh !!" << endl;
    }

    cout << "\t  ---- TERIMAKASIH SUDAH BELANJA !!! ----" << endl;

    return 0;
}