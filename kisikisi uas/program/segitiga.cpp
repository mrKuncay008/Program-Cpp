#include <iostream>

using namespace std;
// segitiga angka terbalik
/*int main(int argc, char const *argv[])
{
	int segi, b;
	cout << "Masukan jumlah : ";
	cin >> segi;
	

	for (int a = 2; a <= segi; ++a)
	{
		for ( b = 1; b <= segi - a; ++b) 
            cout <<" ";
        for (b = 1; b <= a; ++b)
			cout << b;
            cout << "\n";
   }
	return 0;
} */

// segitiga angka biasa
int main(int argc, char const *argv[])
{
	int segi;
	cout << "Masukan jumlah : ";
	cin >> segi;
	
	for ( int i = 1; i <= segi; ++i) {
    
    for (int b  = 1; b <= i; ++b) { 
			cout << i << " ";
   }
      cout << endl;
   }
	return 0;
}
