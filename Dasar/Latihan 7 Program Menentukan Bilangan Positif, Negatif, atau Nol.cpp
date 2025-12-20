#include <iostream>
using namespace std;

int main(){
	int a;
	
	cout << "Masukkan bilangan: ";
	cin >> a;
	
	if(a  < 0 ){
		cout << a << " adalah bilangan negatif";
	}else if (a >= 0 ){
		cout << a << " adalah bilangan positif";
	}else {
		cout << "bilangan tidak valid";
	}
}
