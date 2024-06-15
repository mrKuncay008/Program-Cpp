#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ar[5];

	int nilaicari;
	string status;

	cout << "===========================================\n";
	cout << " ===== Mencari Nilai N pada array =======\n";
	cout << "============================================\n";

	cout << "\n === isi array ====\n";
	for (int i = 0; i < 5; ++i)
	{
		cout << "isi index [" << i << "] = ";
		cin >> ar[i];
	}

	cout<<"\nMasukkan nilai yang dicari = ";cin>>nilaicari;

     for(int i=0; i<5;i++){
          if(ar[i]==nilaicari)
          {
            cout<<"\nNilai yang dicari ("<<nilaicari<<") ditemukan di indek ke ["<<i<<"]\n";
            status = "ketemu";
           	break;
          }
          else {
          	status = "Not Found";
          }
     }

     if (status == "Not Found"){
          cout<<"\nNilai yang dicari ("<<nilaicari<<") tidak ditemukan\n";
     }

	return nilaicari;
}