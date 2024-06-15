#include <iostream>

using namespace std;

struct node {
	char data;
	struct node *next;
};

struct node* head;
struct node* tail;

void create() {
	head = tail = NULL;
	
}

void insert_depan(char data) {
	// tempurary node
	struct node* p;
	p = new node;
	p ->data = data;
	p ->next = NULL;

	if(head == NULL) {
		head = tail = p;
		
	} else {
		tail->next = p;
		tail = p;
	}
}

int main()
{
	char c;

	create();

	do{
		cout << "Masukan Data A...Z: ";
		cin >> c;

		if (c != '.') {
			insert_depan(c);
		}
	}
	while(c!='.');

	// Mencetak isi linklist
	struct node* current = head;
	while (current != NULL) {

		cout << current->data << " ";
		current = current->next;
	}
	return 0;
}
