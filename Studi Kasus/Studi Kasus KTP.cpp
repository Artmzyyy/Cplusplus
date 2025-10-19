#include <iostream>
#include <string>

using namespace std;
int main(){
	string nik,msbrl,rt,nama,alamat, lhr, jns,ds,kcmt,agm,sts,krj,ngr, tgl,bln,thn;
	char goldar;

	cout << "Masukkan NIK \t\t\t : " ;
	getline(cin, nik);
	cout << "Masukkan Nama \t\t\t : " ;
	getline(cin, nama);
	cout << "Masukkan Tempat Lahir \t\t : ";
	getline(cin, lhr);
	cout << "Masukkan Tanggal Lahir \t\t : ";
	getline(cin, tgl);
	cout << "Masukkan Bulan Lahir \t\t : ";
	getline(cin, bln);
	cout << "Masukkan Tahun Lahir \t\t : ";
	getline(cin, thn);
	cout << "Masukkan Golongan Darah \t : " ;
	cin >> goldar;
	cin.ignore();
	cout << "Masukkan Jenis Kelamin \t\t : " ;
	getline(cin, jns);
	cout << "Masukkan RT/RW \t\t\t : " ;
	getline(cin, rt);
	cout << "Masukkan Kel/Desa \t\t : " ;
	getline(cin, ds);
	cout << "Masukkan Kecamatan \t\t : " ;
	getline(cin, kcmt);
	cout << "Masukkan Agama \t\t\t : " ;
	getline(cin, agm);
	cout << "Masukkan Status Kawin \t\t : " ;
	getline(cin, sts);
	cout << "Masukkan Pekerjaan \t\t : " ;
	getline(cin, krj);
	cout << "Masukkan Kewarganegaraan \t : " ;
	getline(cin, ngr);
	cout << "Masukkan Masa Berlaku \t\t : " ;
	getline(cin, msbrl);
	
	cout << endl;
	cout << endl;
	
	cout << "+================================================================+" << endl;
	cout << "|| NIK \t\t\t\t : " << nik << "\t	||" << endl;
	cout << "|| Nama \t\t\t : " << nama << "	||" << endl;
	cout << "|| Tempat/Tgl Lahir \t\t : " << lhr << "," <<tgl << "/"<< bln << "/"<< thn << "\t	||" << endl;
	cout << "|| Jenis Kelamin \t\t : " << jns << "\t\t	||" << endl;
	cout << "||\tGolonan darah \t\t : " << goldar << "\t\t\t	||"<< endl;
	cout << "||  \tRT/RW \t\t\t : " << rt << "\t\t	||" << endl;
	cout << "||  \tKel/Desa \t\t : " << ds << "\t\t||" << endl;
	cout << "||  \tKecamatan \t\t : " << kcmt << "\t\t 	||" << endl;
	cout << "|| Agama \t\t\t : " << agm << "\t\t 	||" << endl;	
	cout << "|| Status Perkawinan \t\t : " << sts << "\t\t 	||" << endl;
	cout << "|| Pekerjaan \t\t\t : " << krj << "\t\t 	||" << endl;
	cout << "|| Kewarganegaraan \t\t : " << ngr << "\t\t 	||" << endl;
	cout << "|| Masa Berlaku  \t\t : " << msbrl << "\t\t 	||" << endl;
	cout << "+================================================================+" << endl;
}
