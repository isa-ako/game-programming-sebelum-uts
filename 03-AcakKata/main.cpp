#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(0)) );
    string kata;
    string kata_baru;
    //kata = "semarang";
    cout << "input kata : "; cin >> kata;
    cout << kata << endl;

    vector<int> sudah;
    vector<int>::iterator penunjuk;

    for(int i=0; i<kata.size(); i++)
    {
        int kembar = 0;
        int angka = rand()%kata.size();
        if( sudah.size()>0 ){
            for(penunjuk = sudah.begin(); penunjuk != sudah.end(); ++penunjuk){
                if( *penunjuk==angka ){
                    kembar=1;
                    i--;
                    break;
                }
            }
        }

        if(!kembar){
            sudah.push_back(angka);
            kata_baru.push_back(kata[angka]);
        }
    }

    cout << kata_baru << endl;

    return 0;
}
