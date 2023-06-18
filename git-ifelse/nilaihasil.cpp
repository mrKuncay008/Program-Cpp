#include <iostream>

using namespace std;

int main()
{
     /* int panjang, lebar, luas;

     cout<<"\nRumus untuk menghitung Luas Persegi = panjang x lebar";
     cout<<"\n\nMasukkan panjang Sisi Persegi : ";
     cin>>panjang;
     cout<<"\nMasukkan Lebar Sisi Persegi : ";
     cin>>lebar;

     luas= panjang*lebar;

     cout<<"Luas Persegi = "<<luas;
     cout<<"\n\n"; */

     int A, B;

     cout << "\nmasukan nilai A: ";
     cin >> A;
     cout << "\nmasukan nilai B: ";
     cin >> B;


     if (A < 5)
     {
          cout <<"Hasil dari B dan A: " << B/3 << A;
	cout << endl;
     }

     if (A>B) {

	  cout <<"hasil dari A: " << A;
	cout << endl;
     }
	if (A<B){

          cout << "hasil dari B "<< B;
	cout << endl;
     }

     else  {

          cout << "\njika tidak hasil nya: "<< B/3 << A;
	cout << endl;
    }

     return 0;
}
