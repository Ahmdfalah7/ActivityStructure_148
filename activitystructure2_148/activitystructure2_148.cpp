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
	cin >> mhs.nama;
	cout << "Masukkan Umur :";
}