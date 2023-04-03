#include <iostream>
using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[20];  
	char nama[25];
	AlamatDetail alamat;
	int umur;
};


int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukkan NIM :";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukkan Nama :";
		cin.getline(mhs[i].nama, 25);
		cout << "Alamat :";
		cout << "\n\tMasukkan Desa :";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\nMasukkan Kota :";
		cin.getline(mhs[i].alamat.kota, 20);  
		cout << "Masukkan Umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, 'n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[1].NIM;
		cout << "\nNama = " << mhs[1].nama;
		cout << "\nDesa = " << mhs[1].alamat.desa;
		cout << "\nKota = " << mhs[1].alamat.kota;
		cout << "\nUmur = " << mhs[1].umur; 
	}
		 
}