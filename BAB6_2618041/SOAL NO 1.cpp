#include <iostream>

using namespace std;

int main() {
    int angka;
    long long faktorial = 1;

    cout << "##   Andhika Dwi Pristiyanto - 2618041   ##" << endl;
    cout << "==========================================" << endl;
    cout << "##     Program C++ Hitung Faktorial     ##" << endl;
    cout << "==========================================" << endl << endl;

    cout << "Input angka: ";
    cin >> angka;

    cout << angka << "! = ";
    for (int i = 1; i <= angka; i++) {
        faktorial *= i;
        cout << i;
        if (i < angka) {
            cout << " * ";
        }
    }
    
    cout << " = " << faktorial << endl;

    return 0;
}