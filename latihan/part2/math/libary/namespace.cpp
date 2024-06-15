// contoh namesapce
#include <iostream>

using namespace std; // di dalam iostream ada soucre untuk using std::

// membuat namespace sendiri
namespace kucing
{
	char var[] = "Kuncay"; // namepsace kuncay dengan var charakter kucing
	char vor[] = "mansyur";
	char ver[] = "itam";	//menggunakan using
}

namespace aisma  // namesapce aisma dengan float / double
{
	double asu = 3.000;
	double asi = 4.000;
	double asa = 5.000;
}

int main() {
	using kucing::var;
	using kucing::ver;
	using kucing::vor; // menggunakan using untuk memanggil namspace

	using aisma::asu;
	using aisma::asi;
	using aisma::asa;

	cout <<var<< "\n";
	cout <<vor<< "\n"; // mengoutput namespace dan tipe datanya
	cout <<ver<< "\n";

	cout << aisma::asu << endl;
	cout << aisma::asi << endl;
	cout << aisma::asa << endl;

	return 0;
}


/* out put
 *
 * Kuncay
 * mansyur
 * itam
 * 3
 * 4
 * 5

