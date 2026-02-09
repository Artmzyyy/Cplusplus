#include <iostream>
using namespace std;

int main(){
	int a;
	
	cout << "Masukkan nilai: ";
	cin >> a;
	if (a >= 85) {
	    cout << "Grade A";
	} else if (a >= 70) {
	    cout << "Grade B";
	} else if (a >= 55) {
	    cout << "Grade C";
	} else if (a >= 40) {
	    cout << "Grade D";
	} else {
	    cout << "Grade E";
	}
}
