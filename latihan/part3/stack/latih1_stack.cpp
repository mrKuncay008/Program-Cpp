#include <iostream>
#include <stack>

using namespace std;

#define max 5
string data[max];
int top = 0;

bool kosong() {
	if (top == 0)
	{
		return true;
	} else {
		return false;
	}
}

bool full() {
	if (top >= max)
	{
		return true;
	} else {
		return false;
	}
}

void display() {
	if (!kosong())
	{
		cout << "Data tersimpan: " << endl;
		for (int i = 0; i < top; ++i)
		{
			cout << i+1 << ". " << data[i] << endl;
		}
	} else {
		cout << "Maaf Data tidak ada !!" << endl;
	}
	if (full())
	{
		cout << "stack Penuh" << endl;
	}
	cout << endl;
}

void push() {
	if (!full()) 
	{
		cout << "Masukan data kucing: ";
		cin >> data[top];
		top++;
	}
}

void pop() {
   
   if(!kosong()) {
   		cout << "Data terhapus ";
   		top--;
   }
}

int main(int argc, char const *argv[])
{
	int pill;
	string kucing;

	stack:
		system("clear");
		display();
		cout << "Menu: \n1. Push(Tambah)\n2. Pop (apus)\n Pilih: ";
		cin >> pill;

	if (pill == 1)
	{
		system("clear");
		push();
		goto stack;
	}

	else if (pill == 2) {
		pop();
		goto stack;
	}
	system("clear");

	cout << "Program Selsai" << endl;
}