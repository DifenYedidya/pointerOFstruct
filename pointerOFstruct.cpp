#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int jmlhmaha;

struct nilai
{
string nama[100];
float tugas[100],uas[100],uts[100],akhir[100];
	
};

void olah(int n);
void show(int n , nilai *p);


int main(){
	cout<<"====================================================\n";
	cout<<"            PROGRAM HITUNG NILAI AKHIR\n";
	cout<<"====================================================\n";
	cout<<"Masukan jumlah mahasiswa : "; cin>>jmlhmaha;
	system("cls");
	olah(jmlhmaha);

	getch();
}

void olah(int n)
{
	nilai *p;
	p = new nilai();
	
	for(int i=0;i<n;i++)
	{
		cout<<"====================================================\n";
		cout<<"             Masukan data mahasiswa ke-"<<i+1<<endl;
		cout<<"====================================================\n";
		cin.ignore();
		cout<<"Nama Mahasiswa : "; getline(cin,p->nama[i]);
		cout<<"Nilai Tugas    : "; cin>>p->tugas[i]; 
		cout<<"Nilai UTS      : "; cin>>p->uts[i];
		cout<<"Nilai UAS      : "; cin>>p->uas[i]; 
		p->akhir[i] = (p->tugas[i] * 30/100) + (p->uts[i] * 35/100)+ (p->uas[i] * 35/100);
		system("cls");
	}
	show(jmlhmaha, &p);
}

void show(int n, nilai *p)
{	
	for(int i=0;i<n;i++)
	{
		cout<<"====================================================\n";
		cout<<"                 Data mahasiswa ke-"<<i+1<<endl;
		cout<<"====================================================\n";
		cout<<"Nama Mahasiswa : "<<p->nama[i]<<endl;
		cout<<"Nilai Tugas    : "<<p->tugas[i]<<endl;
		cout<<"Nilai UTS      : "<<p->uts[i]<<endl;
		cout<<"Nilai UAS      : "<<p->uas[i]<<endl;
		cout<<"Nilai akhir    : "<<p->akhir[i];
		cout<<endl<<endl;
	}
}
