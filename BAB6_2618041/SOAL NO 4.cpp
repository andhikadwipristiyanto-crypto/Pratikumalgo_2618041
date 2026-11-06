#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "===== 2618041 || Andhika Dwi Pristiyanto =====" << endl << endl;

    cout << "Masukkan jumlah angka: ";
    cin >> n;
    cout << endl;

    cout << "=== Deret Campur Logika ===" << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << (i * 2) << " ";
        } 
        else if (i % 3 == 0) {
            cout << (i + 3) << " ";
        } 
        else {
            cout << i << " ";
        }
    }

    cout << endl << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}