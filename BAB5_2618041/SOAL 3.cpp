#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_pemesan, nama_menu;
    int pilihan, jumlah_pesanan;
    long harga_satuan = 0, total_pesanan = 0, diskon = 0, total_pembayaran = 0;

    cout << "Masukkan Nama Pemesan: ";
    getline(cin, nama_pemesan);
    cout << endl;

    cout << "=== MENU KANTIN ===" << endl;
    cout << "1. Nasi Goreng - Rp15000" << endl;
    cout << "2. Mie Goreng  - Rp12000" << endl;
    cout << "3. Bakso       - Rp10000" << endl;
    cout << "4. Es Teh      - Rp5000" << endl;
    
    cout << "Pilih menu: ";
    cin >> pilihan;
    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah_pesanan;
    cout << endl;

    switch (pilihan) {
        case 1:
            nama_menu = "Nasi Goreng";
            harga_satuan = 15000;
            break;
        case 2:
            nama_menu = "Mie Goreng";
            harga_satuan = 12000;
            break;
        case 3:
            nama_menu = "Bakso";
            harga_satuan = 10000;
            break;
        case 4:
            nama_menu = "Es Teh";
            harga_satuan = 5000;
            break;
        default:
            cout << "Pilihan menu tidak valid!" << endl;
            return 1;
    }

    total_pesanan = harga_satuan * jumlah_pesanan;

    if (total_pesanan > 40000) {
        diskon = total_pesanan * 8 / 100;
    }

    total_pembayaran = total_pesanan - diskon;

    cout << "===== STRUK PEMBAYARAN =====" << endl;
    cout << "Nama Pemesan      : " << nama_pemesan << endl;
    cout << "Harga Satuan      : Rp" << harga_satuan << endl;
    cout << "Jumlah Pesanan    : " << jumlah_pesanan << endl;
    cout << "Total Pesanan     : Rp" << total_pesanan << endl;
    cout << "Diskon 8%         : Rp" << diskon << endl;
    cout << "Total Pembayaran: Rp" << total_pembayaran << endl;
    cout << "Terima kasih telah memesan!" << endl;

    return 0;
}