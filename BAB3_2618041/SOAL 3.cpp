#include <iostream>
using namespace std;
int main() {
	int r, t;
    long long volume; 
    const double PI = 3.14159265358979323846;

    cout << "=== Program Menghitung Volume Tabung ===\n";
    cout << "Masukkan jari-jari tabung : ";
    cin >> r;
    cout << "Masukkan tinggi tabung    : ";
    cin >> t;

    volume = PI * r * r * t;

    cout << "Volume Tabung adalah: " << volume << "\n";

return 0;
}
