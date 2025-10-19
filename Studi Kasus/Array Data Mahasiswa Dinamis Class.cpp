#include <iostream>
#include <string>
#include <utility>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string fakultas;
    string prodi;
    string alamat;
};

class Data {
public:
    int n;
    Mahasiswa mhs[100];

    void input() {
        cout << "Masukkan Jumlah Mahasiswa: ";
        cin >> n;
        cin.ignore(); 

        for (int i = 0; i < n; i++) {
            cout << "\nMasukkan data mahasiswa ke-" << i + 1 << endl;
            cout << "NIM       : ";
            getline(cin, mhs[i].nim);
            cout << "Nama      : ";
            getline(cin, mhs[i].nama);
            cout << "Fakultas  : ";
            getline(cin, mhs[i].fakultas);
            cout << "Prodi     : ";
            getline(cin, mhs[i].prodi);
            cout << "Alamat    : ";
            getline(cin, mhs[i].alamat);
        }
    }

    void tampil() {
        cout << "\n=== Data Mahasiswa ===\n";
        for (int i = 0; i < n; i++) {
            cout << "\nData ke-" << i + 1 << endl;
            cout << "NIM       : " << mhs[i].nim << endl;
            cout << "Nama      : " << mhs[i].nama << endl;
            cout << "Fakultas  : " << mhs[i].fakultas << endl;
            cout << "Prodi     : " << mhs[i].prodi << endl;
            cout << "Alamat    : " << mhs[i].alamat << endl;
        }
    }
    
    void sortingNama(){
    	for(int i = 0; i < n - 1; i++){
    		for(int j = 0; j < n - i - 1; j++){
    			if(mhs[j].nama > mhs[j+1].nama){
    				swap(mhs[j], mhs[j+1]);
				}
			}
		}
	}
};

int main() {
    Data dt;
    dt.input();
    
    cout << "\nTampilan sebelum di Sorting\n" << endl;
    dt.tampil();
    
    dt.sortingNama();
    
    cout << "\nTampilan setelah di Sorting\n" << endl;
	dt.tampil();
};
