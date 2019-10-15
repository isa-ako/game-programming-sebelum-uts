#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int maks = 0;
    int chance = 3;
    int answer = 0;
    int tebakan = 0;

    while( (maks>100)||(maks<10) ){
        cout << "Masukkan maksimal nilai (10-100)";
        cin >> maks;

        if( maks>100 ) cout << "Terlalu besar" << endl;
        else if( maks<10 ) cout << "Terlalu kecil" << endl;

        cout << "Silakan tebak nilai antara 0 sampai " << maks << " !! ";
        srand((unsigned)time(0));
        answer = (rand()%maks)+1;
        cout << "\n(cheat:ini adalah angka yang ditebak) : " << answer << endl; //test the number

        while (chance > 0 && tebakan != answer) {
            cout << endl << "Masukkan tebakan Anda : ";
            cin >> tebakan;
            if (tebakan == answer) {
                cout << "Tebakan Anda benar." << endl;
                break;
            } else {
                chance--;
                if (tebakan > answer) {
                    cout << "Tebakan Anda terlalu besar." << endl;
                } else if (tebakan < answer) {
                    cout << "Tebakan Anda terlalu kecil." << endl;
                }
                cout << "Tebakan Anda salah, nyawa : " << chance << endl;
                if (chance == 0) {
                    cout << "Game over." << endl;
                }
            }
        }
    }
    return 0;
}
