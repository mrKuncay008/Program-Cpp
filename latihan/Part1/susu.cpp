#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,s; // masukan variable 
	char c[30]; // 
	clrscr(); // untuk jika mengcompaile membersihkan layar di terminal
	printf("enter nama cewenya: \n"); 
	scanf("%s" ,c); // input variable
	printf("berapa: \n");
	scanf("%d" ,&s);
	for(a=100; a*s;a++) // int ( a =100) while( a*s ) mengmbalikan a++
	{
		printf("susu :v %s", c);
		printf("hiyaaaaaaa");
	}

getch(); // membaca input yg ada di keyboard
return 0;
}