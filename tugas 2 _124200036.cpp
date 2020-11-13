#include <iostream>
#include <iomanip>
using namespace std;
main()

{
	int ayah, ibu, anak1, anak2, bantuan1, bantuan2, bantuan3, bantuan4, total;
	
	cout<<"----------------------------------------------------------"<< endl;
	cout<<"                BANTUAN BENCANA ALAM                      "<< endl;
	cout<<"----------------------------------------------------------"<< endl;
	cout<<"Usia Ayah :";
	cin>> ayah;
	
	//if ayah
	if (ayah >0 && ayah <=12) // anak-anak
	{bantuan1=15000*30;}
		else if (ayah >12 && ayah <=20) // remaja
		{bantuan1=20000*30;}
		else if (ayah >20) // dewasa 
		{bantuan1=30000*30;}
	else
	{cout <<"Usia tidak sesuai \n";}
	
	cout<<"Usia Ibu :";
	cin>> ibu;
	
	//if ibu
	if (ibu >0 && ibu <=12) // anak-anak
	{bantuan2=15000*30;}
		else if (ibu >12 && ibu <=20) // remaja
		{bantuan2=20000*30;}
		else if (ibu >20) // dewasa 
		{bantuan2=30000*30;}
	else
	{cout <<"Usia tidak sesuai \n";}
	
	cout<<"Usia Anak Pertama :";
	cin>> anak1;
	
	//if anak1
	if (anak1 >0 && anak1 <=12) // anak-anak
	{bantuan3=15000*30;}
		else if (anak1 >12 && anak1 <=20) // remaja
		{bantuan3=20000*30;}
		else if (anak1 >20) // dewasa 
		{bantuan3=30000*30;}
	else
	{cout <<"Usia tidak sesuai \n";}
	
	cout<<"Usia Anak Kedua :";
	cin>> anak2;
	
	//if anak2
	if (anak2 >0 && anak2 <=12) // anak-anak
	{bantuan4=15000*30;}
		else if (anak2 >12 && anak2 <=20) // remaja
		{bantuan4=20000*30;}
		else if (anak2 >20) // dewasa 
		{bantuan4=30000*30;}
	else
	{cout <<"Usia tidak sesuai \n";}
	
	total = bantuan1 + bantuan2 + bantuan3 + bantuan4;
	
	cout <<"Total bantuan yang diterima selama satu bulan sebesar Rp."<< total <<endl;	
	return 0;
}
		
		
	
	
