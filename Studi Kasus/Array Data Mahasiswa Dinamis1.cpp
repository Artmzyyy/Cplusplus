#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{
	string nim;
	string nama;
	string fakultas;
	string prodi;
	string alamat;
};


int main(){
	int n;
	
	cout << "Masukkan Jumlah Mahasiswa: ";
	cin >> n;
		
	Mahasiswa mhs[n];
		
	for(int i = 0; i < n; i++){
		cout << "Masukkan data mahasiswa ke-"<<i+1<< endl;
		cout << "NIM \t: ";
		cin >> mhs[i].nim;
		cout << "Nama \t: ";
		cin >> mhs[i].nama;
		cout << "Fakultas : ";
		cin >> mhs[i].fakultas;
		cout << "Prodi \t: ";
		cin >> mhs[i].prodi;
		cout << "Alamat \t: ";
		cin >> mhs[i].alamat;
	}
			
	cout << "\nData yg sudah dimasukkan: " << endl;
	for(int i = 0; i < n; i++){
		cout << "Data ke-"<<i+1<<endl;
		cout << "NIM \t: " << mhs[i].nim << endl;
		cout << "Nama \t: " << mhs[i].nama << endl;
		cout << "Fakultas : " << mhs[i].fakultas << endl;
		cout << "Prodi \t: " << mhs[i].prodi << endl;
		cout << "Alamat \t: " << mhs[i].alamat << endl;
	}
	
}
