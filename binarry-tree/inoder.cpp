#include <iostream>
using namespace std;

struct inoder // struct inoder digunakan untuk merepresentasikan node dalam Binary sechre tree. 
{
	int data;
	inoder* kiri;
	inoder* kanan;
};
// Fungsi buatNode digunakan untuk membuat node baru dengan data yang diberikan. 
inoder* buatNode(int data) {
	inoder* Nodebaru = new inoder();
	if (!Nodebaru)
	{
		cout << "Error Coba lagi!!" << endl;
		return NULL;
	}

	Nodebaru->data = data;
	Nodebaru->kiri = Nodebaru->kanan = NULL;
	return Nodebaru;
}
// Fungsi insertNode digunakan untuk menyisipkan node baru ke dalam BST.
inoder* insertNode(inoder* root, int data) {
	if(root == NULL) {
		root = buatNode(data);
		return root;
	/*mempertimbangkan aturan BST (node yang lebih kecil ditempatkan di anak kiri dan node yang lebih besar ditempatkan di anak kanan). 
	Fungsi inoderVersal digunakan untuk mencetak elemen-elemen BST secara in-order (urutan kiri-akar-kanan).*/
	}

	if (data < root->data) {
		root->kiri = insertNode(root->kiri, data);
	}

	 else if(data > root -> data) {
	 	root -> kanan = insertNode(root -> kanan, data);
	 }
	 	return root;
}

void inoderVersal(inoder* root) {

	if (root == NULL)
	{
		return;
	}
	inoderVersal(root -> kiri);
	cout << root -> data << " ";
	inoderVersal(root -> kanan);
}
/*
Di dalam fungsi main, kita membuat pointer root yang awalnya ditetapkan sebagai NULL. 
Kemudian, kita memanggil insertNode beberapa kali untuk menyisipkan beberapa node ke dalam BST.
Akhirnya, kita mencetak elemen BST dengan memanggil inoderVersal.
*/
int main()
{
	inoder* root = NULL;
	root = insertNode(root, 50);

	insertNode(root,50);
	insertNode(root,20);
	insertNode(root,40);
	insertNode(root,70);
	insertNode(root,60);
	insertNode(root,80);

	cout << "Inorder versal dari Binary tree nya adalah: \n";
	inoderVersal(root);

	cout << endl;
	return 0;
}
