//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int main(){
//	stack<string> mahasiswa;
//	
//	mahasiswa.push("Yuwan");
//	mahasiswa.push("Rocky");
//	mahasiswa.push("Dadan");
//	
//	mahasiswa.pop();
//	
//	cout<<mahasiswa.top();
//	//cout
//}

//
//#include<stdio.h>
//#define MAX 50
//typedef int data_Type;
//typedef struct{
// data_Type data[MAX];
// int TOS;
//}STACK;
//data_Type item[MAX], temp, x;
//int pilih, i, n;
//char lagi='y';
//void inisialisasi(STACK *s){
// s->TOS = 0;
//}
//int full(STACK *s){
// return (s->TOS == n);
//}
//int empty(STACK *s){
// return (s->TOS == 0);
//}
//void push(data_Type x, STACK *s){
// if(full(s))
// puts("Stack is Full!");
// else {
// s->data[s->TOS] = x;
// (s->TOS)++;
// }
//}
//
//data_Type pop(STACK *s){
// data_Type tampung;
// if(empty(s))
// puts("Stack is Empty!");
// else {
// (s->TOS)--;
// tampung = s->data[s->TOS];
// }return tampung;
//}
//void tampil(STACK *s){
// for(i=s->TOS-1; i>=0; i--) {
// printf("%d  ", s->data[i]);
// }puts("");
//}
//
//main(){
// STACK s;
// inisialisasi(&s);
// printf("Masukkan jumlah tumpukan : ");
// scanf("%d", &n);
// while((lagi == 'y') || (lagi == 'Y')){
// puts("MENU");
// puts("1. Push");
// puts("2. Pop");
// printf("What do you want?: ");
// scanf("%d", &pilih);
//
// switch(pilih) {
// case 1:
// printf("Enter data: ");
// scanf("%d", &x);
// push(x, &s);
// break;
// case 2:       
// pop(&s);
// break;
// default :
// puts("Invalid Input!");
// break;
// }
// tampil(&s);
// fflush(stdin);
// printf("Try again [y/t]? ");
// scanf("%c", &lagi);
// puts("");
// }
//}


#include <iostream>
using namespace std;

int stack[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   
   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   
   if(top<=-1) {
   
   	cout<<"Stack Underflow"<<endl;
   }
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else {
   	cout<<"Stack is empty"<< endl;
	}
}

int main(){
	int val, pilihan;
	do {	
		cout<<"1. Add Elemen"<<endl;
		cout<<"2. Pop Elemen"<<endl;
		cout<<"3. Tampilkan Elemen"<<endl;
		cout<<"Masukkan Pilihan: ";
		cin>>pilihan;

		switch(pilihan){
			case 1: cout<<"Masukkan Elemen yang mau ditambahkan";
					cin>>val;
					push(val);
				break;
			case 2: pop();
				break;	
			case 3: display();
				break;	
			
			default: 
				cout<<"Salah Pilihan";
		}		
	} while(pilihan!=4);

	return 0;
}
