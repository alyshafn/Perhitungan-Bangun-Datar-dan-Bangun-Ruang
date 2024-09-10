#include <iostream>
#include <conio.h>
using namespace std;

class bangun_ruang
{
	public :
		int sisi;
		int luas;
		double volume;
		
	void luas_bujursangkar(){
		cout<<endl;
		cout<<"Menghitung Luas Bujursangkar"<<endl;
		cout<<"Diketahui : Sisi = ";cin>>sisi;
		luas = sisi * sisi;
		cout<<"Ditanyakan : Luas Bujursangkar"<<endl;
		cout<<"Penyelesaian : Luas Bujursangkar = Sisi * Sisi = "<<luas<<endl;
		cout<<endl;
	}
	
	void volume_kubus(){
		cout<<endl;
		cout<<"Menghitung Volume Kubus"<<endl;
		cout<<"Diketahui : Sisi = ";cin>>sisi;
		volume = sisi * sisi * sisi;
		cout<<"Ditanyakan : Volume Kubus"<<endl;
		cout<<"Penyelesaian : Volume Kubus = Sisi * Sisi * Sisi = "<<volume<<endl;
        cout<<endl;	
	}
		
	void luas_bujursangkar_volume_kubus(){
		cout<<endl;
		cout<<"Menghitung Luas Bujursangkar dan Volume Kubus"<<endl;
		cout<<"Diketahui : Sisi = ";cin>>sisi;
		luas = sisi * sisi;
		volume = sisi * sisi * sisi;
		cout<<"Ditanyakan : "<<endl;
		cout<<"1. Luas Bujur sangkar"<<endl;
		cout<<"2. Volume Kubus"<<endl;
		cout<<"Penyelesaian : Luas Bujursangkar = Sisi * Sisi = "<<luas<<endl;
		cout<<"Penyelesaian : Volume Kubus = Sisi * Sisi * Sisi = "<<volume<<endl;
		cout<<endl;
	}
};

int main(){
	int pilihan;
	cout<<"Aplikasi Perhitungan Bangun Datar dan Bangun Ruang"<<endl;
    cout<<"Bujursangkar dan Kubus"<<endl;
	do{
	cout<<"\nMenu Perhitungan :\n";
	cout<<"1. Menghitung Luas Bujursangkar\n";
	cout<<"2. Menghitung Volume Kubus\n";
	cout<<"3. Menghitung Luas Bujursangkar dan Volume Kubus\n";
	cout<<"0. Keluar Program\n";
	cout<<"Masukkan Menu Yang Anda Ingin Cari [0.1.2.3]: ";cin>>pilihan;
	bangun_ruang nya;
	switch(pilihan)
	{
	case 1:nya.luas_bujursangkar();
		break;
	case 2:nya.volume_kubus();
		break;
	case 3:nya.luas_bujursangkar_volume_kubus();
		break;
	case 0:system("cls");{
		cout << "EXIT" << endl;getch();
		return 0;break;
	}
	default:
	system("cls");{
		cout << "\nPilihan tidak tersedia" << endl;
	}
	}
	getch();	
    }while(pilihan!=4);
}
