#include <iostream>
using namespace std;

int main(){
	int cel, fahren;
	float kelvin;
	
	cout << "Masukkan suhu(celcius): ";
	cin >> cel;
	
	fahren = cel * 9 / 5 + 32;
	kelvin = cel + 273.15;
	
	cout << "konversi Fahrenheit = " << fahren << endl;
	cout << "konversi Kelvin = " << kelvin;
}
