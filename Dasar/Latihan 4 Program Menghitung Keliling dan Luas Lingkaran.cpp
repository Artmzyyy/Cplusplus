#include <iostream>
using namespace std;

int main(){
	const float phi = 3.14;
	float r;
	float luas;
	float keliling;
	
	cout << "Masukkan jari-jari: ";
	cin >> r;
	
	luas = phi * r * r;
	keliling = 2 * phi * r;
	
	cout << "Jari jarinya = " << r << endl;
	cout << "Luas = " << luas << endl;
	cout << "Keliling = " << keliling << endl;
}
