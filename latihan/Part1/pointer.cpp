#include <iostream>
#include <string>
using namespace std;

int main()
{
	string kucing = "ini adlah kucing";
	string kuncay = "\nhallo hihi";
	string * ptr  = &kucing;
	string * ptrKucing = &kuncay;
	cout << kucing << "\n" << "ini namanya: " << &kucing;
	cout<< kuncay << " ada di :\n" << &kuncay << "\n";
	cout << ptr << "\n";
	cout << "nilai si kuncay" << *ptrKucing << "\n";
 	cout << "nilai si kucing\n" << *ptr << "\n";
 	return 0 ;

}

// dibawah ini adalah program menampilkan bilangan ganjil 

/*int main()
{
	int kuncay,samsul,itam;
	kuncay= -1;
	cout<< "\nbilangan ganjil (kucing kucing): \n";
	for(itam=1;itam<50;itam++)
	{
		samsul=2+kuncay;
		cout<<samsul<<"asima meo\n";
		kuncay=samsul;
	} 
	return 0;
} */