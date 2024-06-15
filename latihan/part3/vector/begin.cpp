#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> coba1 = {1,2,4,5,7,8}; //deklasrasi vektor 
	vector<int> coba2 = {41,8};

	cout << "Vektor Coba1: ";
	for(const int& a : coba1) { // proses output vektor bentuk nilai

		cout << a << " ";
	}

	cout << "\nVektor coba2: "; // proses output vektor bentuk ukuran dan nilai
	for(int b : coba2) {
		
		cout << b << " ";
	}
return 0;

}
