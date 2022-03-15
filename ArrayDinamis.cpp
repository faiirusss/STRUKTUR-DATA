#include <iostream>
#include <conio.h>
using namespace std;


struct dataBarang{
    
    
    string *barang=new string[20];
    int *kode=new int;
    int *Jumlah=new int;
};

dataBarang brg;

int main(){

    system("cls");
    cout << "...................................." << endl;
    cout << "| Falimi Salimi | 2100117 | RPL 2B |" << endl;
    cout << "|     Struktur Data & Algoritma    |" << endl;
    cout << "....................................\n\n" << endl;


    int n;

    cout << "\n\n";
    cout<<"INPUT DATA BARANG\n\n";

    cout <<"> Masukkan Jumlah Data yang di Input: ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++)
    {
        cout<<"Masukkan Data ke-" << i <<endl;
        cout<<"Masukkan Kode Barang : "; 
        cin>>brg.kode[i];
        cout<<"Masukkan Nama Barang : "; 
        cin>>brg.barang[i];
        cout<<"Masukkan Jumlah      : "; 
        cin>>brg.Jumlah[i];
        cout << endl;

    }
    system("cls");
    cout<<"> Menampilkan Data Barang\n\n"<<endl;
    for(int i=1; i<=n; i++){
        
        cout<<"Data ke-"<<i<<endl;
        cout<<"Kode Barang : "<<brg.kode[i]<<endl;
        cout<<"Nama Barang : "<<brg.barang[i]<<endl;
        cout<<"Jumlah      : "<<brg.Jumlah[i]<<endl;
        cout << endl;
    }cout<<endl;
    delete[] brg.barang;
    delete[] brg.kode;
    delete[] brg.Jumlah;
    
    return 0;
}