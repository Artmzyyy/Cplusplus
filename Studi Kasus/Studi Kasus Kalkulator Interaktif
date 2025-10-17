#include <iostream>
#include <thread>   // untuk sleep_for
#include <chrono>   // untuk durasi waktu

using namespace std;

void loading(string text, int dotCount = 3, int delay = 500) {
    cout << text;
    for (int i = 0; i < dotCount; i++) {
        cout << ".";
        cout.flush(); // biar titik langsung tampil tanpa nunggu newline
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

int main() {
    double angka1, angka2, hasil;
    char operasi;

    cout << "=== Kalkulator Sederhana ===" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua   : ";
    cin >> angka2;
    cout << "Pilih operasi (+ - * /): ";
    cin >> operasi;

    loading("Menghitung", 5, 300);
    loading("Menetapkan hasil", 4, 400);

    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            if (angka2 == 0) {
                cout << "Error: Tidak bisa membagi dengan nol!" << endl;
                return 0;
            }
            hasil = angka1 / angka2;
            break;
        default:
            cout << "Operasi tidak dikenali!" << endl;
            return 0;
    }

    cout << "Hasilnya adalah: " << hasil << endl;

    return 0;
}

