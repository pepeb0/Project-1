#include <iostream>

using namespace std;

int main() {
	 int x,y,z,v; 

    cout<<"PROGRAM C++ MENGHTUNG VOLUME BALOK"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukan Panjang : "; 
    cin>>x;
    cout<<"Masukan Lebar   : ";
    cin>>y;
    cout<<"Masukan Tinggi  : ";
    cin>>z;
    
    v=x*y*z;
    
    cout<<"Volume Balok adalah: "<<v<<endl; 
	return 0;
}
