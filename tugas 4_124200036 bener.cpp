#include <iostream>
#include <iomanip>
using namespace std;

main ()
{
		int N, M, pilih, kali, pangkat, i;
	cout<<" PERKALIAN DAN PERPANGKATAN "<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"1. Perkalian "<<endl;
	cout<<"2. Perpangkatan "<<endl;
	cout<<"\n\n";
	cout<<"----------------------------"<<endl;
	cout<<"Pilih: "; cin>> pilih;
	switch (pilih)
	{	
	case 1 :
		
		cout<< "Masukan Nilai N = ";
		cin >> N;
		cout<< "Masukan Nilai M = ";
		cin >> M;
		cout<<"\n\n";
		cout <<"Hasil Kali: " << " " << N << " ^ " << M << endl;
			kali = 0;
			for (int i = 1; i <= M; i++)
			{
				kali += N;
					if (i != M)
					{cout << N << " + ";}
					else
					{cout << N << " = "<<kali;}		
			}
	break;
	case 2 :
		cout<< "Masukan Nilai N = ";
		cin >> N;
		cout<< "Masukan Nilai M = ";
		cin >> M;
		cout<<"\n\n";
			cout <<"Hasil Pangkat: " << " " << N << " ^ " << M << endl;
			pangkat = 1;
			for (int i = 1; i <= M; i++)
			{
				pangkat *= N;
					if (i != M)
					{cout << N << " X ";}
					else
					{cout << N<< " = "<<pangkat;}		
			}
			
	break;
	default :
		cout << ("INPUT SALAH!\n");
		
	}	
		
}
