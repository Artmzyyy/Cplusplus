#include <iostream>
using namespace std;

int main(){
	char pilih;
	int a, b;
	
	cout << "Masukkan angka pertama: "; cin >> a;
	cout << "Masukkan angka kedua: "; cin >> b;
	cout << "Pilih operasi(+ - * /): "; cin >> pilih;
	
	if(pilih == '+'){
		cout << "Hasil: " << a << " + " << b << " = " << a + b;
	}else if(pilih == '-'){
		cout << "Hasil: " << a << " - " << b << " = " << a - b;
	}else if(pilih == '*'){
		cout << "Hasil: " << a << " * " << b << " = " << a * b;
	}else if(pilih == '/'){
		cout << "Hasil: " << a << " / " << b << " = " << a / b;
	}else {
		return 0;
	}
}
