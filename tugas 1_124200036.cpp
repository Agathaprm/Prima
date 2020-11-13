#include <iostream>

using namespace std;

int main()
{
 char nama [50], nim [15];
 float nilai_uts,nilai_uas,rata_rata;
 
 cout<< "  Tugas Praktikum Algoritma dan Pemrograman " <<endl;
 cout<< "Nama: Agatha Prima Vista                    " << endl;
 cout<< "NIM : 124200036                             " << endl;
 
 cout<< "" <<endl;
 cout<< "--------------------------------------------" <<endl;
 cout<< "          REKAP NILAI MAHASISWA             " << endl;
 cout<< "--------------------------------------------" <<endl;
 cout<<"Nama Mahasiswa : ";
 cin.getline (nama,sizeof(nama));
 cout<<"NIM : "; cin>>nim;
 cout<< "" <<endl;
 cout<< "Nilai Uts   = "; 
 cin>> nilai_uts;
    cout<< "Nilai Uas   = ";
 cin>> nilai_uas; 
 
 
 rata_rata = (nilai_uts + nilai_uas )/2;
 
cout<<"Mahasiswa bernama ("<<nama<<") dengan NIM ("<<nim<<") mendapatkan nilai : "<<rata_rata;
 
 
}
