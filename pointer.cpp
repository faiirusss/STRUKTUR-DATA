#include <iostream>
#include <string>
using namespace std;
// Fairus Salimi
// 2100117
// RPL 1B
int main()
{
main_menu:
{
    string lanjut, input, error;
    int a;
    system("cls");

    cout << "------- Dasar Pemrograman -------\n\n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    cout << "|1| Menampilkan Nama & Nim       |6 | Model CatWalk                    ||" << endl;
    cout << "|2| Menampilkan Jumlah Bilangan  |7 | Menentukan Followers Terbanyak   ||" << endl;
    cout << "|3| Menghitung Volume Bola       |8 |                                  ||" << endl;
    cout << "|4| Konversi Menit ke Detik      |9 |                                  ||" << endl;
    cout << "|5| Menghitung Jumlah Karakter   |10|                                  ||" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n";
    cout << "------------- (1/2) -------------\n";
    cout << "=-=-=-=-=- ( ) (-) (>) -=-=-=-=-=\n\n";
    if (input != "")
    {
        cout << endl
             << "Maaf, " << input;
        input = "";
    }
    cout << "> Input: ";
    getline(cin, input);
    if (input == "-")
    {
        system("cls");
        return 0;
    }
    else if (input == ">")
    {
        goto main_menu2;
    }
    else if (input == "1")
    {
        goto menu_pertama;
    }
    else if (input == "2")
    {
        goto menu_kedua;
    }
    else if (input == "3")
    {
        goto menu_ketiga;
    }
    else if (input == "4")
    {
        goto menu_keempat;
    }
    else if (input == "5")
    {
        goto menu_kelima;
    }
    else if (input == "6")
    {
        goto menu_keenam;
    }
    else
    {
        input = " Pilihan tidak tersedia.";
        goto main_menu;
    }
}
main_menu2:
{
    cout << "Hello World";
}
menu_pertama:
{
    string nama, ulang;
    int nim;
    system("cls");
    cout << "=============== Menu Pertama ===============" << endl;
    cout << "- Program menampilkan Inputan Nama dan Nim -\n\n";
    cout << "> Masukkan Nama: ";
    getline(cin, nama);
    if (nama == "")
    {
        cout << "Tidak boleh kosong!";
        goto menu_pertama;
    }
    else if (nama.length() < 5)
    {
        cout << "Minimal 5 karkter";
        goto menu_pertama;
    }
    cout << "> Masukkan Nim: ";
    cin >> nim;

    cout << "\n> " << nama << " Nim kamu adalah: [ " << nim << " ]" << endl;

    cout << "\n\nKembali ke menu utama? [y/n]";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        goto main_menu;
    }
    else if (ulang == "n" || ulang == "N")
    {
        system("cls");

        return 0;
    }
    else
    {
        goto menu_pertama;
    }
}

menu_kedua:
{
    string nama, ulang;
    float angka1, angka2, hasil;

    system("cls");
    cout << "=============== Menu Kedua ===============" << endl;
    cout << "-  Program Menampilkan Jumlah Bilangan  -\n\n";

    cout << "> Masukkan Nilai 1: ";
    cin >> angka1;
    cout << "> Masukkan Nilai 2: ";
    cin >> angka2;
    hasil = angka1 + angka2;
    cout << endl;

    cout << "> Hasil Jumlah dari " << angka1 << " dengan " << angka2 << " adalah = " << hasil << endl;

    cout << "\n\nKembali ke menu utama? [y/n]";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        goto main_menu;
    }
    else if (ulang == "n" || ulang == "N")
    {
        system("cls");

        return 0;
    }
    else
    {
        goto menu_kedua;
    }
}

menu_ketiga:
{
    string ulang;
    double r, phi;
    int volumeBola;

    system("cls");
    cout << "=============== Menu Ketiga ===============" << endl;
    cout << "     - Program Menghitung Volume Bola -\n\n";

    cout << "> Masukkan Jari Jari Bola[cm]: ";
    cin >> r;

    cout << "> Masukkan Phi: ";
    cin >> phi;

    volumeBola = 4 / 3 * phi * r * r * r;
    cout << endl;
    cout << "> Volume Bola adalah = " << volumeBola << "cm3" << endl;

    cout << "\n\nKembali ke menu utama? [y/n]";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        goto main_menu;
    }
    else if (ulang == "n" || ulang == "N")
    {
        system("cls");

        return 0;
    }
    else
    {
        goto menu_ketiga;
    }
}

menu_keempat:
{

    string ulang;
    int menit, detik, konversi;

    system("cls");
    cout << "=============== Menu Keempat ===============" << endl;
    cout << "    - Program Konversi Menit ke Detik -\n\n";

    cout << "> Masukkan Menit: ";
    cin >> menit;

    cout << "> Masukkan Detik: ";
    cin >> detik;

    konversi = (menit * 60) + detik;

    cout << "Hasil dari " << menit << " menit dan " << detik << " detik menjadi = " << konversi << " detik" << endl;

    cout << "\n\nKembali ke menu utama? [y/n]";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        goto main_menu;
    }
    else if (ulang == "n" || ulang == "N")
    {
        system("cls");

        return 0;
    }
    else
    {
        goto menu_keempat;
    }
}
menu_kelima:
{

    string nama1, nama2, ulang;
    int jumlah_karakter;

    system("cls");
    cout << "=============== Menu Kelima ===============" << endl;
    cout << "   - Program Menhitung Jumlah Karakter -\n\n";

    cout << "> Masukkan Kata 1: ";
    getline(cin, nama1);
    cout << "  " << nama1 << " Terdiri dari = " << nama1.length() << " Karakter\n\n";

    cout << "> Masukkan Kata 2: ";
    getline(cin, nama2);
    cout << "  " << nama2 << " Terdiri dari = " << nama2.length() << " Karakter\n\n";

    jumlah_karakter = nama1.length() + nama2.length();

    cout << "> Jumlah String = " << jumlah_karakter << " Karakter." << endl;

    cout << "\n\nKembali ke menu utama? [y/n]";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        goto main_menu;
    }
    else if (ulang == "n" || ulang == "N")
    {
        system("cls");

        return 0;
    }
    else
    {
        goto menu_kelima;
    }
}

menu_keenam:
{
    string nama, j_kelamin, ulang;
    int umur, tinggi, iq;

    system("cls");
    cout << "=============== Menu Keenam ===============" << endl;
    cout << "   - Program Seleksi Model CatWalk -\n\n";

    cout << "> Pria / Wanita ? ";
    getline(cin, j_kelamin);

    cout << "> Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "> Masukkan Tinggi Badan(cm): ";
    cin >> tinggi;

    cout << "> Masukkan Umur: ";
    cin >> umur;

    cout << "> IQ: ";
    cin >> iq;

    cout << endl;

    if (j_kelamin == "Pria" || j_kelamin == "pria" || j_kelamin == "PRIA")
    {
        if ((tinggi >= 175) && (umur >= 18) && (umur <= 25) && (iq >= 130))
        {
            cout << "Selamat!!!" << endl;
            cout << "Anda lolos menjadi model CatWalk" << endl;
        }
        else
        {
            cout << "Maaf, anda belum lolos menjadi model CatWalk" << endl;
        }
    }
    else if (j_kelamin == "Wanita" || j_kelamin == "wanita" || j_kelamin == "WANITA")
    {
        if ((tinggi >= 170) && (umur >= 18) && (umur <= 25) && (iq >= 130))
        {
            cout << "Selamat!!!" << endl;
            cout << "Anda lolos menjadi menjadi model CatWalk" << endl;
        }
        else
        {
            cout << "Maaf, anda belum lolos menjadi model CatWalk" << endl;
        }
    }
    cout << "\n\nKembali ke menu utama? [y/n]";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        goto main_menu;
    }
    else if (ulang == "n" || ulang == "N")
    {
        system("cls");

        return 0;
    }
    else
    {
        goto menu_keenam;
    }
}

    /*
    TODO SOON
    menu_ketujuh:
    {
        string warn, nama1, nama2, nama3;
        int follow1, follow2, follow3;
        system("cls");
        cout << "=============== Menu Keenam ===============" << endl;
        cout << "   -  Menentukan Followers Terbanyak -\n\n";
        cout << "Masukkan data dengan format: " << endl;
        cout << "> Nama: " << endl;
        cout << "> Jumlah Followers: \n\n";
        cout << "- Orang Pertama - " << endl;
        cout << "> Nama: ";
        getline(cin, nama1);
        cout << "Followers: ";
        cin >> follow1;
        cout << endl;
        cout << "- Orang Kedua - " << endl;
        cout << "> Nama: ";
        cin >> nama2;
        cout << "Followers: ";
        cin >> follow2;
        cout << endl;
        cout << "- Orang Ketiga - " << endl;
        cout << "> Nama: ";
        getline(cin, nama3);
        cout << "Followers: ";
        cin >> follow3;
        if ((nama1.length() < 3 || nama1.length() > 20) && (nama2.length() < 3 || nama2.length() > 20) && (nama3.length() < 3 || nama3.length() > 20))
        {
            goto menu_ketujuh;
        }
    }
    */
}