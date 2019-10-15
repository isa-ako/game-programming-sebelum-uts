#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
    vector<string> item;
    vector<string>::iterator penunjuk;
    int batas_item;
    int pilihan = 1;

    cout << "masukkan batas item : "; cin >> batas_item;

    while(pilihan!=0){

    cout << "" << endl;
    cout << "1. Masukkan Item" << endl;
    cout << "2. Tampilkan Item" << endl;
    cout << "3. Hapus Item" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan pilihan : "; cin >> pilihan;
    cout << "" << endl;

    switch(pilihan){

        case 1:
            if(item.size()<batas_item){
                string inputan;
                cout << "Masukkan nama item : "; cin >> inputan;
                item.push_back(inputan);
                cout << "Item telah ditambahkan" << endl;
            }else{
                cout << "Item Penuh." << endl;
            }
            break;

        case 2:
            for(penunjuk=item.begin(); penunjuk!=item.end(); ++penunjuk){
                cout << "- " << *penunjuk << endl;
            }
            break;

        case 3:
            int dihapus;
            cout << "Hapus Item ke- : "; cin >> dihapus;
            if(dihapus<=item.size()){
                item.erase( item.begin()+(dihapus-1) );
                cout << "item telah dihapus" << endl;
            }else{
                cout << "tidak ada item di index tersebut" << endl;
            }
    }

    }
    return 0;
}
