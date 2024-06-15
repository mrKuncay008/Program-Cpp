#include<iostream>	
using namespace std;

int main()
{
	
	int baris, x, i ; // ini adalah variable input
	
	cout << "masukan jumlah baris: "; // tampilan permintaan jumlah
	
	cin >> baris; // membaca variable input
	
	for (i = 1; i <= baris; i++) // proses var i lebih sama dengan
	
	{
		for (x = 1; x <= i; x++) // proses var x kurang dari var baris 
			cout << "* "; // menampilkan *
		
			cout << "\n"; // menampilkan * unutk spasi kebawah
	}
	
	return 0;
} 

/*-----------------------------------/
		start
	
	pi = baris, x,i,j
	menampilkan jumlah baris
	input baris
	dari i = baris, i lebihsamadengan 1
	dari x = i, x kuranglebih baris 
	tamplikan *

		end
		
*-------------------------------------*/

// segitga sama kaki
//int main() {
//
//
//        int baris, x, i, y ; // ini adalah variable input
//
//        cout << "masukan jumlah baris: "; // tampilan permintaan jumlah
//
//        cin >> baris; // membaca variable input
//       	for (i = 1; i <= baris; i++)    // segitiga sama kaki, i = 1, i kurangsamadengan baris
////      for (i = baris; i >= 1; i--) 	// proses var i lebih sama dengan 1
//
//        {
//        	for (x = i; x < baris; x++)
//                        cout << " ";
//		for (y = 1; y <= i; y++)
//			cout << "* ";
//                        cout << "\n";
//        }
//
//        return 0;
//
//
//} 


/*
int main() {
		// ketupat
	int a;
	int c = 10/2;

	cout << "masukan nilai barig: ";
	cin >> a;

	for(int i = 1; i <= c; i++) {
	
		for(int f = c; f > i; f--) {
		
			cout << " ";
		}
	for (int j = 1; j <= a; j++) {
	
		cout << "*";
	}
		a += 2;
		cout << "\n";
	}

	a -= 4;
	for(int i = (c-1); i >= 1; i--) {
	
		for ( int f = i; f <= (c-1); f++) {		

			cout << " ";
		}
		for( int j = a; j >= 1; j--) {
			
			cout << "*";
		}	
			a -= 2;
			cout << "\n";
		
	}

	return 0;
} 
*/
