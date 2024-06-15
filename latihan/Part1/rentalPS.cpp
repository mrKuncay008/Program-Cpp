#include <iostream>
#include <conio.h>

int main(void)
{
	int j,m,d,msk,klr,tot,biaya; // masukan variable
	struct 
	{
		int jam;
		int menit;
		int detik;
	}masuk;
	struct 
	{
		int jam;
		int menit;
		int detik;
		
	}keluar;


std::cout<<"------------------------------"<<std::endl;
std::cout<<"-------Rental ps Kuncay-------"<<std::endl;
std::cout<<"-------------------------------"<<std::endl;
std::cout<<"Masukan waktu masuk (format 24 jam)"<<std::endl;
std::cout<<"jam :";std::cin>>masuk.jam;
std::cout<<"menit :";std::cin>>masuk.menit;
std::cout<<"detik :";std::cin>>masuk.detik;
std::cout<<std::endl<<std::endl;
std::cout<<"Masukkan waktu keluar (format 24 jam)"<<std::endl;
std::cout<<"jam   : ";std::cin>>keluar.jam;
std::cout<<"menit : ";std::cin>>keluar.menit;
std::cout<<"detik : ";std::cin>>keluar.detik;
std::cout<<std::endl<<std::endl;

 if(masuk.jam>keluar.jam)
   {
    msk=(masuk.jam*3600)+(masuk.menit*60)+masuk.detik;
      klr=((24+keluar.jam)*3600)+(keluar.menit*60)+keluar.detik;
      tot=klr-msk;    
      j=tot/3600;
      m=(tot%3600)/60;
      d=(tot%3600)%60;
      std::cout<<"waktu rental anda : "<<j<<":"<<m<<":"<<d<<std::endl;
      biaya=((double)tot/3600)*(double)4000; //4000 adalah harga satu jam rental PS (bisa diubah)
      std::cout<<"Biaya rental anda : "<<(biaya+1);
   }else
   {
    msk=(masuk.jam*3600)+(masuk.menit*60)+masuk.detik;
      klr=(keluar.jam*3600)+(keluar.menit*60)+keluar.detik;
      tot=klr-msk;
      j=tot/3600;
      m=(tot%3600)/60;
      d=(tot%3600)%60;
      std::cout<<"waktu rental anda : "<<j<<":"<<m<<":"<<d<<std::endl;
      biaya=((double)tot/3600)*(double)4000;
      std::cout<<"Biaya rental anda : Rp."<<(biaya+1);
      std::cout<<"\n"<<std::endl;
   }
	return 0;   
	getch();
} 