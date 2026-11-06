#include <iostream>

using namespace std;

int main() {
    int level = 1;
    int jawaban;
    int kunciJawaban;

    cout << "====== 2618041 || Andhika Dwi Pristiyanto ======" << endl;
    cout << "====== PROGRAM GAME MATEMATIKA ======" << endl << endl;
    do {
        cout << "Level " << level << endl;
        
        kunciJawaban = level + (level * 5);
        
        cout << "Berapa hasil dari " << level << " + " << (level * 5) << " ? ";
        cin >> jawaban;

        if (jawaban == kunciJawaban) {
            cout << "Benar! Naik level!" << endl << endl;
            level++;
        } else {
            cout << "Game Over" << endl;
            break; 
        }

    } while (level <= 5);

    if (level > 5) {
        cout << "Selamat! Kamu menyelesaikan semua level!" << endl;
    }

    cout << "-----------------------------------" << endl;

    return 0;
}