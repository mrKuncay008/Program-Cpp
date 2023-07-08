#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
	char data;
	struct node* next;
};

struct node* pala = NULL;
struct node* body = NULL;

void Create() {
	pala = body = NULL;
}

void insertdepan(char data) {
	struct node* p = new struct node;
	p->data = data;
	p->next = NULL;

	if (pala == NULL) {
		pala = body = p;
	} else {
		p->next = pala;
		pala = p;
	}
}

char Find_First() {
	if (pala == NULL) {
		cout << "Linked List kosong!" << endl;
		return '\0';
	}

	return pala->data;
}

int main() {
	char c;
	Create();

	do {
		cout << "Masukan data A - Z: ";
		cin >> c;
		insertdepan(c);
	} while (c != '.');

	cout << "Elemen pertama: " << Find_First() << endl;

	return 0;
}
