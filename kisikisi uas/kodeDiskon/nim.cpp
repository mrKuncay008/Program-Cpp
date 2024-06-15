
#include <iostream>
using namespace std;

int main()
{
	int nim_anda = 125;
	
	for (int i = 1; i <= 9; i++) {
		cout << i << " nim_anda " << nim_anda << endl;
		nim_anda = nim_anda - 20;
	}
	
	return 0;
}