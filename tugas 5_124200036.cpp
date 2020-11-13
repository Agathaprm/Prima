#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int pilih;
cout<<"Gambar Bangun Datar"<<endl;
cout<<"1. Balok bolong"<<endl;
cout<<"2. Segitiga"<<endl;
cout<<"Pilih: ";cin>>pilih;
cout<<"\n\n";
switch (pilih)
{
case 1 :
	int p,l,i,j;
	cout<<"Balok Bolong"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukan panjang: "; cin>>p;
	cout<<"Masukan lebar: "; cin>>l;
	
	for (int i= 1; i<= p; i++)
	{
		for (int j=1; j<=l; j++)
		{
		if (i==1||i==p||j==1||j==l)
		{cout<<" *";}
			else
			{cout<<"  ";}
		}
	cout<<""<<endl;
	}
break;
case 2:
   int n, bil;
   cout<<"Masukan tinggi : ";cin>>n;
   for(int i=1; i<=n; i++){ 
   bil=i ;          
         for(int j=1;j<=i;j++)
		{
		cout<<bil<<" ";
		bil=bil+n-j;
		 }
		 cout<<endl;
		 }
	break;
	case 3:
	cout<<"INPUT SALAH!"<<endl;	
}
}


