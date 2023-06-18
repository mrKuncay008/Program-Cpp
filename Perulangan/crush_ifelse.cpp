#include <iostream>
#include <string>

using namespace std;

 int main()
 {
 	string nama;
 	cout << "Siapa Nama mu? ";
 	cin >> nama;
 	
 	string crush;
 	cout << "Siapa nama crush mu? ";
 	cin  >> crush;
 	
 	cout << endl;
 	cout << "owlahh! " << nama << " Likes " << crush << " ! " << endl;
 	cout << "Semoga cepat jadiannn !!! \n";
 	
 	cout << "but ....\n";
 	
 	char x;
 	cout << "Apakah kamu ada rasa sama " << nama;
	cin >> x; 
 	
 	if (x == 'Y')
 		{
 			cout << "Gemmoy !!!" << crush << " Suka banaget sama " << nama;
		 }
		else if(x == 'N'){
			cout << "HUHEUHEUHEUHEUHEUEH " << nama << " Mengsedihh :(";
		}
 	return 0;
 }
