#include <iostream>
#include <iomanip>
using namespace std;

void luas_ling();
void keliling_ling();
void volum_tab();
void menu();

float r,t,k,l,v;
int pilih;
char ulang;

int main ()
{
	cout<<"Hitung Lingkaran ========="<<endl;
	cout<<"1. Luas Lingkaran"<<endl;
	cout<<"2. Keliling Lingkaran"<<endl;
	cout<<"3. Volume Tabung"<<endl;
	cout<<"Pilih: ";cin>>pilih;
	cout<<"\n";
switch(pilih)
{
case 1 :
luas_ling();
break;
case 2 :
keliling_ling();
break;
case 3 :
volum_tab();
break;
}
return 0;
}

void luas_ling()
{
	cout<<"Jari-jari: ";cin>>r;
	l=3.14*r*r;
	cout<<"Luas lingkaran adalah "<<l;
	menu();
}
void keliling_ling()
{
	cout<<"Jari-jari: ";cin>>r;
	k=2*3.14*r;
	cout<<"Keliling lingkaran adalah "<<k;
	menu();
}
void volum_tab()
{
	cout<<"Jari-jari: ";cin>>r;
	cout<<"Tinggi tabung: ";cin>>t;
	v=3.14*t*r*r;
	cout<<"Volume tabung adalah "<<v;
	menu();
}

void menu()
{
cout << endl;
cout<<"Ulangi Program? (y/n) ";
cin>>ulang;
if (ulang=='y')
	main();
	else 
	{cout<<"Program selesai terimakasih:)"<<endl;}
}


