/*
    Program Mawar
    Ket : Program untuk mengecek bilangan absolut (negatif atau positif) => positif dan kelipatan lima
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan, hasil1;
    string hasil2;
    //Algoritma
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    hasil1 = ( bilangan < 0)? bilangan *-1:bilangan;
    hasil2 = ( bilangan % 5 == 0)? "bilangan kelipatan 5":"bukan bilangan kelipatan 5";
    cout << bilangan << " adalah " << hasil2;
    cout << endl << "Cek Selesai";
    return 0;
}
