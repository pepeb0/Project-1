#include <iostream>
#include <string>

using namespace std;

int main()
{
	string kartu,pilih;
	
	cout<<"PROJECT KARTU"<<endl;
	cout<<"============="<<endl;
	cout<<"Masukkan kartu Anda (Gold / Premium) : ";
	cin>>kartu;
	if(kartu=="Gold"){
		cout<<"Pilih bonus Anda (ambil bonus / tukar poin) : ";
		cin.get();
		getline(cin,pilih);
		if(pilih=="ambil bonus"){
			cout<<"Selamat bonus anda telah diambil"<<endl;
		} else if (pilih=="tukar poin"){
			cout<<"Selamat bonus anda telah masuk ke poin"<<endl;
		}                               
	} else if (kartu=="Premium"){
		cout<<"Pilih bonus Anda (ambil bonus / tukar poin) : ";
		cin.get();
		getline(cin,pilih);
		if(pilih=="ambil bonus"){
			cout<<"Selamat bonus anda telah diambil"<<endl;
		} else if (pilih=="tukar poin"){
			cout<<"Selamat bonus anda telah masuk ke poin"<<endl;
		}
	}
	return 0;
}
