#include <iostream>

using namespace std;

int main()
{	//login
	string username;
	string password;
	string command;
	int login = 0;

	while (login < 5)
	{
		cout << "-------- Silakan masuk ! ------\n";
		cout << "\n";
		cout << "username: ";
		cin >> username;
		cout << "password: ";
		cin >> password;

		if (username == "admin" && password == "adminpass10")
		{
			cout << "\nWelcome to C++ mrkunca \n";
			break;
		}
		if(login == 5)
		{
			cout << "gagal coba lagi\n";
		}
		else
		{
			cout << "Try again \n";
		login++;	
	
		}
		
		cout << "thank you \n";
	} 	
	cout << "--------------------------------\n";
	cout << "Silakan di pilih\n";
	cout << "exit / sintax \n";
	cin >> command;
	
	while(command != "exit"){
		if (command == "sintax")
		{
			cout << "\n ---------------------\n";
			cout << "			C++			 \n";
			cout << "\n";
			cout << "- #include // bagian deklarasi\n";
			cout << "		.h ( header file dari C atau C++)\n";
			cout << "		.cpp artinya source code dari C++\n";
			cout << " s // menampilkan nilai string \n";
			cout << " d // menampilkan nilai angka atau desimal\n";
			cout << "if // variable untuk deklarasi untuk jika\n";
			cout << "		else// untuk tidak\n";
			
		}
		cout << "\nBaca lagi? exit/sintax ";
		cin >> command;
		if ( command == "exit")
		{	
			cout << "thanks Comeback later !!\n";
		}
		else (command < "exit");
		{
			command;
		}
		
	}
	return 0;
}
	
