#include <iostream>
#include <string>
#include <vector>

struct items {
    char item[50];
    int stat;
};

using namespace std;

int main()
{
    char inputlagi = 'y';
    int index = 0;
    vector< items > kumpulan_item;

    while( inputlagi=='y' ){
        items terhebat;
        items terlemah;
        items input_item;

        cout << endl << "Masukkan nama item : ";
        cin >> input_item.item;
        cout << "Masukkan stat : ";
        cin >> input_item.stat;
        kumpulan_item.push_back(input_item);

        cout << "Item Anda adalah : " << kumpulan_item.at(index).item << endl;
        cout << "Stat : " << kumpulan_item.at(index).stat << endl;

        items sebelum = (index!=0) ? kumpulan_item.at(index-1) : kumpulan_item.at(index);
        cout << "Item sebelumnya : " << sebelum.item << endl;
        index++;

        int i;
        for( i=0; i<kumpulan_item.size(); i++ ){
            if( i==0 ){
                terhebat = kumpulan_item.at(i);
                terlemah = kumpulan_item.at(i);
            }else{
                if( terhebat.stat < kumpulan_item.at(i).stat )
                    terhebat = kumpulan_item.at(i);
                if( terlemah.stat > kumpulan_item.at(i).stat )
                    terlemah = kumpulan_item.at(i);
            }
        }

        cout << "Item terhebat : " << terhebat.item << endl;
        cout << "Item terlemah : " << terlemah.item << endl;

        cout << "Input item lagi ? (y/n) " << endl;
        cin >> inputlagi;
    }
    return 0;
}
