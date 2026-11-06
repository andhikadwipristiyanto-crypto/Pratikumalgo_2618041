#include <iostream>

using namespace std;

int main() {
    int n;
    int i = 1;
    int total = 0;

    cout << "##                2618041                ##" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "===================================" << endl << endl;

    cout << "Jumlah deret yang diinginkan: ";
    cin >> n;
    cout << endl;

    while (i <= n) {
        cout << i;
        total += i; 
        
        if (i < n) {
            cout << " + ";
        } else {
            cout << " = " << total;
        }
        i++; 
    }

    cout << endl << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}