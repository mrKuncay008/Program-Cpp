#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    char data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtBeginning(char value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(char value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;

    char input;
    cout << "Masukkan karakter (A-Z) atau '.' untuk berhenti: ";
    cin >> input;

    while (input != '.') {
        myList.insertAtEnd(input);
        cout << "Masukkan karakter (A-Z) atau '.' untuk berhenti: ";
        cin >> input;
    }

    cout << "Linked List: ";
    myList.display();

    return 0;
}
