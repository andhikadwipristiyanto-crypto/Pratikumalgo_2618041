#include <iostream>
#include <string>

using namespace std;

int pilihanBangun, pilihanHitung;

string garis() {
    string hasil = "";
    for (int i = 0; i < 47; i++) {
        hasil += "=";
    }
    return hasil;
}

void DataDiri() {
    string nama, nim;
    cout << "Masukan Nama Lengkap Anda : ";
    getline(cin, nama);
    cout << "Masukan Nim Anda : ";
    getline(cin, nim);
    cout << garis() << endl << endl;
}

void BangunDatar() {
    cout << "=== BANGUN DATAR ===" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Keluar" << endl;
    cout << "Masukan Pilihan Bangun Datar : ";
    cin >> pilihanBangun;

    switch (pilihanBangun) {
        case 1:
            cout << "Pilihan Anda Adalah Persegi" << endl << endl;
            break;
        case 2:
            cout << "Pilihan Anda Adalah Persegi Panjang" << endl << endl;
            break;
        case 3:
            cout << "Pilihan Anda Adalah Segitiga" << endl << endl;
            break;
        case 4:
            cout << "Pilihan Anda Adalah Lingkaran" << endl << endl;
            break;
        case 5:
            cout << "Anda Memilih Keluar" << endl << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl << endl;
            break;
    }
}

void Hitung() {
    cout << "Kamu ingin Hitung Luas(1)/Volume(2) ? ";
    cin >> pilihanHitung;

    if (pilihanHitung == 1) {
        switch (pilihanBangun) {
            case 1: {
                double sisi, luas;
                cout << "Masukan sisi : ";
                cin >> sisi;
                luas = sisi * sisi;
                cout << "Luas Persegi : sisi x sisi = " << luas << endl;
                break;
            }
            case 2: {
                double panjang, lebar, luas;
                cout << "Masukan panjang : ";
                cin >> panjang;
                cout << "Masukan lebar : ";
                cin >> lebar;
                luas = panjang * lebar;
                cout << "Luas Persegi Panjang : panjang x lebar = " << luas << endl;
                break;
            }
            case 3: {
                double alas, tinggi, luas;
                cout << "Masukan alas : ";
                cin >> alas;
                cout << "Masukan tinggi : ";
                cin >> tinggi;
                luas = 0.5 * alas * tinggi;
                cout << "Luas Segitiga : 1/2 x alas x tinggi = " << luas << endl;
                break;
            }
            case 4: {
                double r, luas;
                cout << "Masukan jari-jari : ";
                cin >> r;
                luas = 3.14 * r * r;
                cout << "Luas Lingkaran : 3.14 x r x r = " << luas << endl;
                break;
            }
            default:
                cout << "Pilihan bangun datar tidak tersedia." << endl;
                break;
        }
    } else if (pilihanHitung == 2) {
        switch (pilihanBangun) {
            case 1: {
                double sisi, volume;
                cout << "Masukan sisi : ";
                cin >> sisi;
                volume = sisi * sisi * sisi;
                cout << "Volume Kubus : sisi x sisi x sisi = " << volume << endl;
                break;
            }
            case 2: {
                double panjang, lebar, tinggi, volume;
                cout << "Masukan panjang : ";
                cin >> panjang;
                cout << "Masukan lebar : ";
                cin >> lebar;
                cout << "Masukan tinggi balok : ";
                cin >> tinggi;
                volume = panjang * lebar * tinggi;
                cout << "Volume Balok : panjang x lebar x tinggi = " << volume << endl;
                break;
            }
            case 3: {
                double alas, tinggiSegitiga, tinggiPrisma, volume;
                cout << "Masukan alas : ";
                cin >> alas;
                cout << "Masukan tinggi segitiga : ";
                cin >> tinggiSegitiga;
                cout << "Masukan tinggi prisma : ";
                cin >> tinggiPrisma;
                volume = (0.5 * alas * tinggiSegitiga) * tinggiPrisma;
                cout << "Volume Prisma Segitiga : (1/2 x alas  x tinggi) x tinggiPrisma = " << volume << endl;
                break;
            }
            case 4: {
                double r, tinggiTabung, volume;
                cout << "Masukan jari-jari : ";
                cin >> r;
                cout << "Masukan tinggi tabung : ";
                cin >> tinggiTabung;
                volume = (3.14 * r * r) * tinggiTabung;
                cout << "Volume Tabung : (3.14 x r x r) x tinggi = " << volume << endl;
                break;
            }
            default:
                cout << "Pilihan bangun datar tidak tersedia." << endl;
                break;
        }
    } else {
        cout << "Pilihan hitung tidak valid!" << endl;
    }

    cout << endl << garis() << endl << endl;
}

int main() {
    char ulang;

    DataDiri();

    do {
        BangunDatar();

        if (pilihanBangun == 5) {
            break;
        }

        if (pilihanBangun >= 1 && pilihanBangun <= 4) {
            Hitung();
        }

        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "SELAMAT KAMU TELAH MENYELESAIKAN LATIHAN !!!" << endl;

    return 0;
}