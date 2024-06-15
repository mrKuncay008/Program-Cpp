#include <iostream>

#include <string>

using namespace std;

int main(int argc, char
  const * argv[]) {
  string barang;
  double harga, diskon, total;
  int quant;

  cout << "Silakan pilih barang :" << endl;
  cout << "- Sabun Muka" << endl;
  cout << "- Sabun Mandi" << endl;
  cout << "- Sampoo" << endl;
  cout << "- Pasta gigi" << endl;
  cout << "- Parfum " << endl;
  cin >> barang;
  cout << endl;

  if (barang == "Sabun Muka") {
    harga = 35000;
    cout << "Anda telah memilih " << barang << " Dengan Harga Rp." << harga << endl;
  } else if (barang == "Sabun Mandi") {
    harga = 12000;
    cout << "Anda telah memilih " << barang << " Dengan Harga Rp." << harga << endl;
  } else if (barang == "Sampoo") {
    harga = 25000;
    cout << "Anda telah memilih " << barang << " Dengan Harga Rp." << harga << endl;
  } else if (barang == "Pasta gigi") {
    harga = 23000;
    cout << "Anda telah memilih " << barang << " Dengan Harga Rp." << harga << endl;
  } else if (barang == "Parfum") {
    harga = 75000;
    cout << "Anda telah memilih " << barang << " Dengan Harga Rp." << harga << endl;
  }

  cout << "\nMasukan jumlah Yang akan anda beli: ";
  cin >> quant;

  total = quant * harga;
  cout << "\n----- Total belanja ----- " << endl;
  cout << "\nanda belanja senilai: Rp." << total << endl;
  cout << "----	----	----" << endl;
  cout << endl;

  if (total > 100000) {
    diskon = 20;
    cout << "---- PROMO !!! Imlek & Tahun Baruu ! -----" << endl;
    cout << " ---- Anda Mendapatkan Diskon " << diskon << "% ----" << endl;
  } else {
    cout << "Maaf Blum Dapat Promo !" << endl;
  }

  cout << "\n\n////// Invoice Belanja //////\n";
  cout << " @ Jenis barang: " << barang << endl;
  cout << " @ harga: Rp." << harga << endl;
  cout << " @ jumlah beli: " << quant << endl;
  cout << " -----------------------------\n";
  cout << " Total Belanja: Rp." << total << endl;
  cout << "Diskon -" << diskon << "%\n";
  cout << "jumlah Yang Dibayar adalah: Rp." << total * diskon / 100 << "\n\n";

  cout << "----- Terimakasi -----";
  return 0;
}