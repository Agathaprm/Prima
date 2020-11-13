#include <iostream>
using namespace std;
main()
{
	string name, pass;
	int nilai_harian, nilai_uts, nilai_uas, rata_algo, rata_kalkulus , pilih;

cout<<"           Login Akun            "<<endl;
cout<<"---------------------------------"<<endl;

cout << "Username : "; cin >> name;
cout << "Password : "; cin >> pass;
 
cout << "\n\n";
 
if (name == "Prima" or name == "PRIMA" or name == "prima")
{
if (pass == "124200036")
{
cout << "LOGIN BERHASIL!"<<endl;
}
else 
cout << "PASSWORD ANDA SALAH!";
}
else 
if (pass == "124200036")
{
cout << "USERNAME ANDA SALAH!";
}
else
{
cout << "USERNAME DAN PASSWORD ANDA SALAH!";
}
cout <<"\n\n";

cout << "----------------Input Nilai-----------------"<<endl;
cout <<"\n\n";
cout << "1.Nilai Kalkulus"<<endl;
cout << "2.Nilai Algoritma"<<endl; 
cout <<"\n\n";
cout << "Pilih: "; cin>> pilih;

switch (pilih)
{
case 1 :
	cout<<"Nilai Harian: "; cin>> nilai_harian;
	cout<<"Nilai UTS: "; cin>> nilai_uts;
	cout<<"Nilai UAS: "; cin>> nilai_uas;
	cout <<"\n\n";
rata_kalkulus = (nilai_harian+nilai_uts+nilai_uas)/3;
if (rata_kalkulus>=80)
{
cout<<"Selamat Anda Lulus Kalkulus dengan nilai"<<rata_kalkulus;
}
else
{
cout<<"Anda Tidak Lulus Kalkulus dengan nilai" <<rata_kalkulus;	
}
break;

case 2 :
	cout<<"Nilai Harian: "; cin>>nilai_harian;
	cout<<"Nilai UTS: "; cin>>nilai_uts;
	cout<<"Nilai UAS: "; cin>>nilai_uas;
	cout <<"\n\n";

rata_algo = (nilai_harian+nilai_uts+nilai_uas)/3;

if(rata_algo>=80)
{
cout<<"Selamat Anda Lulus Algoritma dengan nilai"<<rata_algo;
}
else
{
cout<<"Anda Tidak Lulus Algoritma dengan nilai" <<rata_algo;	
}
break;
case 3 :
	cout<<"Input Salah!"<<endl;
break;
}

}
 

