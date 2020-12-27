#include <iostream>
using namespace std;

int main()
{int n = 0; 
int i, i_kurang, max2=0; 
int max = 0, min = 0, selisih [999]= {0};
int angka[n];
float  rata2 = 0, rata = 0;
cout<<"Masukan banyak angka: ";cin>>n;

for (int i=0; i<n; i++){
cout<<"Angka ke-"<<i+1<<": "; cin>>angka[i];}

cout<<"_________HASIL________"<<endl;
cout<<"Deret \t: ";
for (int i=0; i<n; i++)
cout<<angka[i]<<" ";
cout<<"\n";
max= angka[0];
for (int i=0; i<n; i++){
	if (max<angka[i]){
	max= angka[i];
	}
	else 
	min=angka[0];
	if (min>angka[i]){ 
	min= angka[i];
	}
}
for (int i=0; i<n; i++)
{rata= rata+angka[i];}

rata2=rata/n;
n=n-1;
for (int i=0; i<n; i++);
{
	if (i<n){
	i_kurang=i+1;
 	selisih[i]= angka[i]- angka[i_kurang];
 	}
	else selisih[i] =0;
	if 	(selisih [i]<0) selisih[i] =selisih[i]*(-1);
 	    max2 = selisih[1];
	for (int i=0; i<n; i++){
    if (selisih[i]>max2){
		max2=selisih[i];
		}
	}
}		
cout<<"Maksimum\t: "<<max<<endl;
cout<<"Minimum\t\t: " <<min<<endl;
cout<<"Rata-rata\t: "<<rata2<<endl;
cout<<"Selisih max\t: "<<max2;
return 0;
}


