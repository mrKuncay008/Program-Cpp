#include <iostream>

using namespace std;

int main () {
	
	int nilai[5];
	nilai[0] = 32;
	nilai[1] = 42;
	nilai[2] = 76;
	nilai[3] = 31;
	nilai[4] = 57;
	int i = 1;
	while (i < 5){
		cout << "nilai ke-" << i << " "<< nilai[i]<<"\n";
		i++;
	}
	return 0;
}
