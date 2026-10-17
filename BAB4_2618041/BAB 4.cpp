#include <iostream>
using namespace std;

int main() {
    double pendapatan;
    int tanggungan;
    double tarif = 0.0;
    double pajak_awal = 0.0;
    double pajak_akhir = 0.0;
    int persentase_tarif = 0;

    cout << "Pendapatan bulanan: Rp";
    cin >> pendapatan;

    if (pendapatan < 0) {
     cout << "Input tidak valid." << endl;
     return 0;
 }

 cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
 cin >> tanggungan;

 if (pendapatan < 5000000) {
     tarif = 0.0;
     persentase_tarif = 0;
 } else if (pendapatan < 10000000) {
     tarif = 0.05;
     persentase_tarif = 5;
 } else if (pendapatan < 20000000) {
     tarif = 0.10;
     persentase_tarif = 10;
 } else {
     tarif = 0.15;
     persentase_tarif = 15;
 }

 pajak_awal = pendapatan * tarif;
 pajak_akhir = pajak_awal;

  if (tanggungan == 1) {
      pajak_akhir -= 100000;
  }

  if (pajak_akhir < 0) {
      pajak_akhir = 0;
  }

  cout << "Tarif pajak: " << persentase_tarif << "%" << endl;
  cout << "Pajak akhir: Rp" << pajak_akhir << endl;
  cout << "------------------------------------" << endl;

  return 0;
}
