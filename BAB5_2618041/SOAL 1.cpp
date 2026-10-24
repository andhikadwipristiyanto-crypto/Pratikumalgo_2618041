#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, nim;
    int nilai;

    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    if (nilai >= 0 && nilai <= 100) {
        int kategori = nilai / 10;
        char grade;

        switch (kategori) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                grade = 'E';
                break;
        }
        
        cout << "Grade " << grade << endl;
        
    } else {
        cout << "Nilai tidak valid" << endl;
    }

    return 0;
}