#include <iostream>


using namespace std;


struct dataBarang{
    
    int *data=new int;
    string *barang=new string[20];
    int *kode=new int;
    int *Jumlah=new int;
};

dataBarang brg;

int main(){
    int n;

    cout << "\n\n";
    cout<<"INPUT DATA BARANG"<<endl<<endl;

    cout <<"Masukkan Jumlah Data yang di Input: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout<<"Masukkan Data ke-" << i <<endl;
        cout<<"Masukkan Kode Barang: "; 
        cin>>brg;
        cout<<"Masukkan Nama Barang: "; 
        cin>>brg;
        cout<<"Masukkan Jumlah     : "; 
        cin>>brg;

    }
    system("CLS");
    cout<<"Menampilkan Data Keseluruhan"<<endl;
    for(int i=1; i<=n; i++){
        cout<<"Data ke-"<<i<<endl;
        cout<<"Kode Barang : "<<brg<<endl;
        cout<<"Nama Barang : "<<brg<<endl;
        cout<<"Jumlah      : "<<brg<<endl;
    }cout<<endl;
   
    
    return 0;
}