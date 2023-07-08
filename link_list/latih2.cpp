#include <iostream>
using namespace std;

struct node{
	int data;
	node* lanjut;
};

class Linklist {
private:
	node* pala;

public:
	Linklist(){
		pala = NULL;
	}

	void mulai(int value) {
		node* newNode = new node;
		newNode -> data = value;
		newNode -> lanjut = pala;
		pala = newNode;
	}

	void akhir(int value) {
		node* newNode = new node;
		newNode -> data = value;
		newNode -> lanjut = NULL;

		if (pala == NULL)
		{
			pala = newNode;
		}
		else {
			node* current = pala;
			while (current->lanjut != NULL) {
				current = current->lanjut;
			}
			current->lanjut = newNode;
		}
	}

	void output() {
		node* current = pala;
		while(current != NULL) {
			cout << current->data << " ";
			current = current->lanjut;
		}
		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	Linklist main;

	main.mulai(10);
	main.mulai(29);
	main.akhir(1);
	main.akhir(29);

	cout << "List link adalah: ";
	main.output();
	
	return 0;
}
