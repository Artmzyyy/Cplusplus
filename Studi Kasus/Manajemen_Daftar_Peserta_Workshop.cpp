#include <iostream>
#include <string>
using namespace std;

struct User{
	int ID;
	string nama;
	User *next;
};

class Workshop{
	private:
		User *head, *tail, *current, *del;
		
	public:
		Workshop(){
			head = NULL;
			tail = NULL;
			current = NULL;
		}
		
		void tambahData(int ID, string nama){
			User* belakang = new User();
			belakang->ID = ID;
			belakang->nama = nama;
			belakang->next = NULL;
			if(head == NULL){
				head = belakang;
				return;
			}
			
			current = head;
			while(current->next != NULL){
				current = current->next;
			}
			current->next = belakang;
		}
		
		void tampilData(){
			current = new User();
			current = head;
			while(current != NULL){
				cout << "===PESERTA===" << endl;
				cout << "ID Peserta	: " << current->ID << endl;
				cout << "Nama Peserta	: " << current->nama << endl;
				current = current->next;
			}
		}
		
		void hapusData(int idCari){
			if(head == NULL){
				cout << "Tidak ada list!";
				return;
			}
			
			if(head->ID == idCari){
				del = head;
				head = head->next;
				delete del;
				cout << "ID " << idCari << " Berhasil Dihapus" << endl;
				return;
			}
			
			User* temp = head;
			while(temp->next != NULL && temp->next->ID != idCari){
        		temp = temp->next;
    		}		
			if(temp->next == NULL){
				cout << "Data tidak ditemukan!" << endl;
			}else {
				del = temp->next;
				temp->next = temp->next->next;
				delete del;
				cout << "ID " << idCari << " Berhasil Dihapus"<< endl;
				return;
			}
			
		}
		
};

int main(){
	Workshop wp;
	int pilih, id;
	string nama;
	do{
		cout << "====WORKSHOP MAMANK GAROXXX====" << endl;
		cout << "1. Input User" << endl;
		cout << "2. Tampil User" << endl;
		cout << "3. Hapus User Tertentu" << endl;
		cout << "4. Keluar" << endl;
		cout << "Pilih: "; cin >> pilih;
		switch(pilih){
			case 1:
				cout << "====INPUT USER====" << endl;
				cout << "ID	: "; cin >> id;
				cin.ignore();
				cout << "Nama	: "; getline(cin, nama);
				wp.tambahData(id, nama);
				cout << "Data berhasil ditambahkan!" << endl;
			break;
			
			case 2:
				wp.tampilData();
			break;
			
			case 3:
				cout <<  "====HAPUS ID====" << endl;
				cout << "Masukkan ID yg ingin dihapus: "; cin >> id;
				wp.hapusData(id);
		}
	}while(pilih != 4);
		cout << "Terima kasih";
	return 0;
}
