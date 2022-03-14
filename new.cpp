#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct databarang // struct sekaligus deklarasi array dinamis
{
    int n;
    int *kode = new int;
    int *jumlah = new int;
    std::string *namabrg = new std::string[n];
};
databarang datab[5];

int main()
{
    string ulang;
    int n;
    do
    {
        cout << "Program Menginputkan Data Barang" << endl;
        cout << "Inputkan jumlah barang : ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "Masukkan Kode Barang: ";
            cin >> datab[i].kode[i];
            cout << "Masukkan Nama Barang: ";
            cin >> datab[i].namabrg[i];
            cout << "Masukkan Jumlah     : ";
            cin >> datab[i].jumlah[i];
            cout << endl;
        }
        cout << endl;
        cout << "====================Data Barang==================" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            cout << "kode barang : " << datab[i].kode[i] << endl;
            cout << "Nama Barang : " << datab[i].namabrg[i] << endl;
            cout << "Jumlah Stok barang : " << datab[i].jumlah[i] << endl;
        }

        cout << endl;

        cout << "Tekan 't' untuk keluar !!" << endl;
        cin >> ulang;
        cout << endl;
    } while (ulang != "t");
    // Pembebasan variable pada array dinamis
    delete[] datab->kode;
    delete[] datab->namabrg;
    delete[] datab->jumlah;

    return 0;
}