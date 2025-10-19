#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string fakultas;
	string prodi;
};

class Data {
	public: 
	int n;
	Mahasiswa mhs[100];		//struct sudah masuk class, tidak perlu dipanggil di main
	
	void tampil(){
		for(int i = 0; i < n; i++){
			cout << "Data ke-" << i+1 << endl;
			cout << "NIM \t: " << mhs[i].nim << endl;
			cout << "Nama \t: " << mhs[i].nama << endl;
			cout << "Fakultas \t: " << mhs[i].fakultas << endl;
			cout << "Prodi \t: " << mhs[i].prodi << endl;
		}
	}
	
	void sortingNama(){
		for(int i = 0; i < n - 1; i++){
			for(int j = 0; j < n - i - 1; j++){
				if(mhs[j].nama > mhs[j+1].nama){
					swap(mhs[j], mhs[j+1]);  //menggunakan function bawaan yaitu swap untuk sorting data 
				}
			}
		}
	}
	
};

int main(){
	Data dt;
	dt.n = 2;
	
	dt.mhs[0] = {"24000", "Ridwan", "FTI", "Infor"};
	dt.mhs[1] = {"24000", "Budi", "FTI", "Infor"};
	
	
	cout << "==== Data Mahasiswa ====" << endl;
	dt.tampil();
	
	dt.sortingNama();
	cout << "Setelah di Sorting" << endl;
		dt.tampil();
}

