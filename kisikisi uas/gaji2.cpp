#include <iostream>
#include <iomanip>
using namespace std;

string comma(int num) {
	stringstream ss;
	ss.imbue(locale(""));
	ss << fixed << num;
	return ss.str();
}

int main()
{
   string nama[10];
   int jum, gol[10],jkerja[10],jlembur[10];
   int gapok[10],glembur[10],tun_pengabdian[10],pajakgapok[10],pajaklembur[10],totpajak[10],gajibersih[10];
	
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
	cout << fixed << setprecision(2) << showpoint;
   for (int i=1;i<=jum;i++){
        cout<<"KARYAWAN KE-"<<i<<endl;
	cout<<"Masukan Nama              : ";
	cin>>nama[i];
	cout<<"Masukan Golongan          : ";
	cin>>gol[i];
	cout<<"Masukan Jumlah Jam Kerja  : ";
	cin>>jkerja[i];
	
	switch (gol[i]){
		case 1 : 
			gapok[i]=1486500;
			tun_pengabdian[i]=250000;
			break;
		case 2 :
			gapok[i]=1926000;
			tun_pengabdian[i]=300000;
			break;
		case 3 :
			gapok[i]=2456700;
			tun_pengabdian[i]=350000;
			break;
		case 4 :
			gapok[i]=2899500;
			tun_pengabdian[i]=400000;
			break;
		default :
			gapok[i]=0;
			tun_pengabdian[i]=0;	
	}
	
	if (jkerja[i]>173){
	    jlembur[i]=jkerja[i]-173;	
	}else{
	     jlembur[i]=0;
	}
	
	glembur[i]=jlembur[i]*20000;
	pajakgapok[i]=0.05*gapok[i];
	pajaklembur[i]=0.05*glembur[i];
	totpajak[i]=pajakgapok[i]+pajaklembur[i];
	gajibersih[i]=((gapok[i]+tun_pengabdian[i]+glembur[i])-totpajak[i]);
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           : Rp."<<comma(gapok[i])<<endl;		
		cout<<"Gaji Lembur          : RP."<<comma(glembur[i])<<endl;
		cout<<"Pajak Gaji Pokok     : Rp."<<comma(pajakgapok[i])<<endl;
		cout<<"Pajak Lembur         : Rp."<<comma(pajaklembur[i])<<endl;
		cout<<"Total Pajak          : Rp."<<comma(totpajak[i])<<endl;
		cout<<"Tunjangan Pengabdian : Rp."<<comma(tun_pengabdian[i])<<endl;
		cout<<"Gaji Diterima        : Rp."<<comma(gajibersih[i])<<endl;
		cout<<endl<<endl;	
	}	

return 0;
}