#include <iostream>
using namespace std;

int main() {
    cout << "    2618041 || Andhika Dwi Pristiyanto" << endl;
    cout << "                TUGAS BAB 7" << endl;
    cout << "===========================================" << endl;

    int kotak;
    cout << "1. Membuat Kotak Angka Diagonal" << endl;
    cout << "   Masukkan ukuran kotak: ";
    cin >> kotak;
    cout << endl;

    for (int i = 1; i <= kotak; i++) {
        for (int j = 1; j <= kotak; j++) {
            if (i == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << endl;

    int segitigaTerbalik;
    cout << "2. Membuat Segitiga Terbalik Genap" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> segitigaTerbalik;
    cout << endl;

    int i = segitigaTerbalik;
    while (i >= 1) {
        int j = 1;
        int angkaGenap = 2;
        while (j <= i) {
            cout << angkaGenap << " ";
            angkaGenap += 2;
            j++;
        }
        cout << endl;
        i--;
    }

    cout << endl;

    int segitigaHuruf;
    cout << "3. Membuat Segitiga Siku-siku Huruf" << endl;
    cout << "   Masukkan ukuran segitiga siku-siku: ";
    cin >> segitigaHuruf;
    cout << endl;

    int baris = 1;
    do {
        int kolom = 1;
        char huruf = 'A';
        do {
            cout << huruf << " ";
            huruf++;
            kolom++;
        } while (kolom <= baris);
        cout << endl;
        baris++;
    } while (baris <= segitigaHuruf);

    return 0;
}