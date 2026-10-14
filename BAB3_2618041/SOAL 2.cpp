#include <iostream>
using namespace std;
int main() {
	double c, f, r, k;

    cout << "\tPROGRAM KONVERSI SUHU\n\n";
    cout << "Masukan Suhu(Celcius) = ";
    cin >> c;

    f = (9.0 / 5.0) * c + 32;
    r = (4.0 / 5.0) * c;
    k = c + 273.15;

    cout << "Jadi,               " << c << " derajat celcius            = " << f << " derajat fahrenheit\n";
    cout << "                    " << f << " derajat fahrenheit        = " << r << "derajat reamur\n";
    cout << "                    " << r << " derajat reamur             = " << k << " derajat kelvin\n";

return 0;
}
