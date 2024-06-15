#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char A[100];
	int i;

	cout << "Masukan Huruf Capital: ";
	cin >> A;

	for(i = 0; i < strlen(A); i++) {
	
		if(A[i] >= 'A' && A[i] <= 'Z') {

			A[i] = A[i] + 32;
		}
	}

	cout << " Mengubah huruf besar menjadi Kecil: " << endl;
	cout << A << endl;

	return 0;
}
