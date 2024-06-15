#include <iostream>
using namespace std;

int main()
{
	int uang, vans, convers;
	
	vans = 50000;
	convers = 30000;

	cout << "berapa uang si mansur: ";
	cin >> uang;

	if (uang > vans){
		cout << "yey mansur beli vans!!\n";   // if tiga atau lebih kondisi
	}
	else if(uang >= convers)
	{
		cout << "gpp lah beli convers hueheuhu\n";
	}
	else {
		cout << "balik aja lah asu huehuehu\n";
	}
	return 0;

}
