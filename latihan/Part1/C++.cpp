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
          cout << B/3 << A;
     }

     if (A>B){
          cout << A;          
     } if (A<B){
          cout << B;
     } 
     else (A < 5);
     {
          cout << B/3 << A;
     }
     return 0;
}