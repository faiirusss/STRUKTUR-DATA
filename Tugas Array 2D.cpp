#include <iostream>
using namespace std;

int main (){

    // deklarasi fungsi penjumlahan matriks
    int penjumlahan[3][2];

    // deklarasi matriks pertama 
    int matriks1[3][2] = {
        {2, -5},
        {5,  2},
        {4,  3},
    };

    // deklarasi matriks kedua
    int matriks2[3][2] = {
        { 9, -2},
        { 5,  4},
        {-6,  5},
    };

    // system(cls) berguna untuk membersihkan semua inputan sebelumnya
    system("cls");

    // menampilkan NAMA | NIM | KELAS & TUGAS
    cout << "|    -----------------------------   |\n\n";
    cout << "|  Fairus Salimi | 2100117 | RPL 2B  |" << endl;
    cout << "|                                    |" << endl;
    cout << "|      TUGAS - ARRAY 2 DIMENSI       |\n\n";
    cout << "     -----------------------------   \n\n";

    // menampilkan matriks pertama
    cout << "> Matriks Pertama\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriks1[i][j] << "\t";
        }
        cout << endl;
}
// \n\n berfungsi untuk memberi enter sebanyak dua kali
cout << "\n\n";

// menampilkan matriks kedua
cout << "> Matriks Kedua\n\n";
for (int i=0; i < 3; i++){
    for (int j=0; j < 2; j++){
        cout << matriks2[i][j] << "\t";
    }
    cout << endl;
}

// \n\n berfungsi untuk memberi enter sebanyak dua kali
cout << "\n\n";

// menampilkan Penjumlahan matriks pertama dengan matriks kedua
cout << "> Penjumlahan Matriks\n\n";

// fungsi penjumlahan matriks
for (int i=0; i < 3; i++){
    for (int j=0; j < 2; j++){
        penjumlahan[i][j]=matriks1[i][j] + matriks2[i][j];

        cout << penjumlahan[i][j] << "\t";
    }
    cout << endl;
}

return 0;

} 