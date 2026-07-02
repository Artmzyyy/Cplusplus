#include <iostream>
using namespace std;

int main() {
    int n, total = 1;

    cout << "Masukkan bilangan: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        total *= i;
    }

    cout << "Faktorial dari " << n << " adalah " << total << endl;

    return 0;
}

