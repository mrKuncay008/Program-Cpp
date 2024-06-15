// membut program size char, int, long, float, double
/*#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "ukuran char: " << sizeof(char) << "\n";
	cout << "ukuran int: " << sizeof(int) << "\n";
	cout << "ukuran bool: " << sizeof(bool) << "\n";
	cout << "ukuran long: " << sizeof(long) << "\n";
	cout << "ukuran float: " << sizeof(float) << "\n";
	cout << "ukuran double: " << sizeof(double) << "\n";
	return 0;
} */

// ini adalah prorgram membaca aliran dengan panjang N dalam buffer string
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char kuncay[5];
	
	cin.getline(kuncay, 3);
	
	cout << kuncay << "\n";
	return 0;
}