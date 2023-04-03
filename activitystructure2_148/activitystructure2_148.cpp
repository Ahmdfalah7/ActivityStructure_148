#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};


int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM :";
	cin >> mhs.NIM;
	cout << "Masukkan Nama :";
	cin >> mhs.nama;
	cout << "Masukkan Alamat :";
	cout << "\n\tMasukkan Desa :";
	cin >> mhs.alamat.desa;
	cout << "\tMasukkan Kota :";
	cin >> mhs.alamat.kota;
	cout << "Masukkan Umur :";
	cin >> mhs.umur;

	cout << "\n\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.nama;
	cout << "\nDesa = " << mhs.alamat.desa;
	cout << "\nkota = " << mhs.alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}