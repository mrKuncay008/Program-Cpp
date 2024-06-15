#include<iostream>
#include <conio.h>
#include <iomanip>
#include <stddef.h>
#include <locale.h>
#include <libintl.h>
#include <features.h>
int thn[20],jum;
#define _(int) gettext(int)

int judul()
{
	std::cout<<"------------------------\n";
	std::cout<<" Laporan Keuang mr kuncay\n";
	std::cout<<"-------------------------\n";
 return 0;
}

int isidata(int msk[],int klr[])
{
	int t;
	std::cout<<"masukan tahun pertama :";std::cin>>t;
	clrscr();
	judul();
	for(int i=1;i<jum;i++)
	{
		thn[i]=t;
		std::cout<<"intput data Tahunan"<<thn[i]<<std::endl;
		std::cout<<"jumlah uang masuk:";std::cin>>msk[i];
		std::cout<<"jumlah uang keluar:";std::cin>>klr[i];
		t++;
	}
 return 0;
}

int selisih(int m,int k)
{
return(m-k);
}
int main()
{
int masuk[33],keluar[33],sel;
judul();
std::cout<<"Masukkan Jumlah Data Laporan : ";std::cin>>jum;
clrscr();
judul();
isidata(masuk,keluar);
clrscr();
judul();

std::cout<<std::setw(6)<<"Tahun"<<std::setw(10)<<"Debit"<< std::setw(10)<<"kredit"<<std::setw(10)<<"Selisih"<<std::endl;//std::setw berguna untuk mengeset width(lebar) rata kanan,
for(int i=1;i<=jum;i++)
{
 sel=selisih(masuk[i],keluar[i]);
   std::cout<<std::setw(6)<<thn[i]<<std::setw(10)<<masuk[i]<<std::setw(10)<<keluar[i]<<std::setw(10)<<sel<<std::endl;
}
 return 0;
 getch();
 }
