#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
	stack <string> kucing;

	kucing.push("kuncay");
	kucing.push("mansur"); 
	kucing.push("itam"); // elemen Paling atas

	kucing.pop(); // pop untuk menghapus eleman paling atas
	cout << "Mengluarkan Kucing "<< kucing.top() <<" Dahulu " << endl;
	return 0;
}
