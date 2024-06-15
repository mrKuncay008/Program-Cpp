#include <iostream>
#include <cstring>
using namespace std;

// variabel dan penetapan nilai
#define MAX 100
int i, a;
int jml = 0;
char bil[MAX];

void rekursif_angka_terbalik (char bil[])  //parameter fungsi pembalik
{
    cout << "\nMaka hasil nya adalah: ";
    for (i = jml; i >= 0; i--)  //perulangan untuk membaca array dari belakang
    {
        cout << bil[i] << "";  //menampilkan array
    }
cout << "\n";
}

int main ()
{
    cout << "--- Program Pembalik angka dengan Rekrusif -----\n\n";
    cout << "Masukan Nilai : ";
   
    cin >> bil;  //inputan untuk tipe data char
    jml = strlen(bil);  //menyalin char ke angka

    rekursif_angka_terbalik(bil);  //pemanggilan fungsi
}


/*int rev (int number) {

	for (int base = 1; base / (base * 10); base*=10)
	{
		if (number <= 9) {
		return(number);
		} else if (number >=10) {
			revMynum = (number % 10) * base; 
				return rev(number / 10) + revMynum; 
		}
	}
}

int main ()
{
	int n, hasil;
	cout << "Menghitung Nilai Terbalik";
	cout << "\n\n";

	cout << "insert the numbers : ";
	cin >> n;
	
	hasil = rev(n);
	cout << "Nilai "<< n << "! = " << hasil << endl; 
}
*/

// int main()
// {
//   int angka;
//   cin>>angka;
//   while (angka>0)
//   {
//     cout<<angka%10;
//     angka=(angka-angka%10)/10;
//   }
// }
