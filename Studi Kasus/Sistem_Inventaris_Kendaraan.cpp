#include <iostream>
using namespace std;

struct Mobil
{
    string Id, Merk, Ketersediaan;
};

class Pegawai{
    string nama, nip;
public:
    Pegawai(string nama, string nip){
        this->nama = nama;
        this->nip = nip;
    }
};

class Kendaraan{
    protected:
    Mobil *mb = new Mobil[100];
};

class InventarisKendaraan : public Kendaraan{
    Pegawai pgw;
    public:
    InventarisKendaraan() : pgw("", "") {

    }
    InventarisKendaraan(string nama, string nip) : pgw(nama, nip) {

    }

    void tambahMobil(string id, string merk, string ketersediaan){
        int n;
        cout << "Masukkan Banyak Mobil  : "; cin >> n;
        for(int i = 0; i < n; i++){
            cout << "Masukkan ID Mobil : "; cin >> mb[i].Id;
            cout << "Masukkan Merk Mobil : "; cin >> mb[i].Merk;
            cout << "Masukkan Ketersediaan Mobil : "; cin >> mb[i].Ketersediaan;
        } 
    }

    void tampilMobil(){
        for(int i = 0; i < 100; i++){
            cout << "ID Mobil : " << mb[i].Id << endl;
            cout << "Merk Mobil : " << mb[i].Merk << endl;
            cout << "Ketersediaan Mobil : " << mb[i].Ketersediaan << endl;
        }
    }

    void hapusMobil(string id){
        for(int i = 0; i < 100; i++){
            if(mb[i].Id == id){
                mb[i].Id = "";
                mb[i].Merk = "";
                mb[i].Ketersediaan = "";
                cout << "Mobil dengan ID " << id << " telah dihapus." << endl;
                return;
            }
        }
        cout << "Mobil dengan ID " << id << " tidak ditemukan." << endl;
    }
};

int main(){
    InventarisKendaraan inventaris;
    int pilih;
    string nama, password;
    b:
    cout << "=== SELAMAT DATANG SILAHKAN LOGIN TERLEBIH DAHULU ===" << endl;
    cout << "Masukkan Nama : "; cin >> nama;
    cout << "Masukkan Password : "; cin >> password;
    if(password == "Pria Solo"){
        cout << "Login Berhasil, Selamat Datang " << nama << endl;
        do{
            cout << "=== SISTEM INVENTARIS KENDARAAN ===" << endl;
            cout << "1. Tambah Mobil" << endl;
            cout << "2. Tampil Mobil" << endl;
            cout << "3. Hapus Mobil" << endl;
            cout << "4. Keluar" << endl;
            cout << "Pilih Menu : "; cin >> pilih;
            switch(pilih){
                case 1:
                    {
                        string id, merk, ketersediaan;
                        inventaris.tambahMobil(id, merk, ketersediaan);
                        break;
                    }
                case 2:
                    inventaris.tampilMobil();
                    break;
                case 3:
                    {
                        string id;
                        cout << "Masukkan ID Mobil yang akan dihapus: "; cin >> id;
                        inventaris.hapusMobil(id);
                        break;
                    }
                case 4:
                    cout << "Keluar dari program." << endl;
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
            }
        } while(pilih != 4);
    } else {
        cout << "Password Salah Silahkan Coba Lagi" << endl;
        goto b;
    }
}

