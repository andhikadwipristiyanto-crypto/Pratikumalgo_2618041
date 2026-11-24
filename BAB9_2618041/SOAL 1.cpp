#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int jumlahKamar;
    string dataKamar[100][2]; 
    int hargaKamar[100][1];   
    
    int totalTerisi = 0;
    int totalKosong = 0;
    int totalPendapatan = 0;

    cout << "=== PROGRAM MANAJEMEN KAMAR HOTEL ===" << endl;
    cout << "Masukkan jumlah kamar: ";
    cin >> jumlahKamar;

    cout << "\n--- INPUT DATA KAMAR HOTEL ---" << endl;
    for (int i = 0; i < jumlahKamar; i++) {
        cout << "\nKamar ke-" << i + 1 << endl;
        cout << "Nomor kamar: ";
        cin >> dataKamar[i][0];
        cout << "Status (Terisi/Kosong): ";
        cin >> dataKamar[i][1];
        cout << "Harga per malam (angka): ";
        cin >> hargaKamar[i][0];
    }

    cout << "\n--- DATA KAMAR HOTEL ---" << endl;
    cout << "=======================================================" << endl;
    cout << left << setw(3) << "No" << "| " 
         << setw(12) << "Nomor Kamar" << "| " 
         << setw(12) << "Status" << "| " 
         << "Harga per Malam" << endl;
    cout << "=======================================================" << endl;

    for (int i = 0; i < jumlahKamar; i++) {
        cout << left << setw(3) << i + 1 << "| " 
             << setw(12) << dataKamar[i][0] << "| " 
             << setw(12) << dataKamar[i][1] << "| " 
             << hargaKamar[i][0] << endl;

        if (dataKamar[i][1] == "Terisi" || dataKamar[i][1] == "terisi") {
            totalTerisi++;
            totalPendapatan += hargaKamar[i][0];
        } else if (dataKamar[i][1] == "Kosong" || dataKamar[i][1] == "kosong") {
            totalKosong++;
        }
    }
    cout << "=======================================================" << endl;

    cout << "\nTotal kamar terisi  : " << totalTerisi << endl;
    cout << "Total kamar kosong  : " << totalKosong << endl;
    cout << "Total pendapatan    : Rp " << totalPendapatan << endl;

    return 0;
}