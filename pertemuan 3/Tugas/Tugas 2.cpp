#include <iostream>
#include <string>

using namespace std;

const int BUKU = 4;

class Perpustakaan {
	private:
		string nama;
		string bukuk[BUKU];
		bool dipinjam[BUKU];
		
	public:
		Perpustakaan() {
			for (int i = 0; i < BUKU; ++i) {
				dipinjam[i] = false;
			}
		}
		void setNama(string n){
			this->nama = n;
		}
		void pinjamBuku(string b) {
			for (int i = 0; i < BUKU; ++i) {
				if (!dipinjam[i]) {
					bukuk[i] = b;
					dipinjam[i] = true;
					cout << "Anda telah meminjam buku dengan judul = " << bukuk[i] << endl;
					return;
				}
			}
			cout << "Mohon Maaf, Stok Buku Sudah Habis" << endl;
		}
		void kembalikanBuku(string b) {
			for (int i = 0; i < BUKU; ++i) {
				if (bukuk[i] == b && dipinjam[i]) {
					dipinjam[i] = false;
					cout << "Anda telah mengembalikan buku dengan judul = " << bukuk[i] << endl;
					return;
				}
			}
			cout << "Buku Tidak Terdaftar Sebagai Buku yang Anda Pinjam" << endl;
		}
		string getNama(){
			return nama;
		}
};

int main(){
	Perpustakaan data;
	string nama, jb;
	int p;
	char r;
	
	cout << "PROGRAM PINJAM BUKU" << endl;
	cout <<"====================================";
	cout << endl << "Masukkan Nama = ";
	getline(cin, nama);
	data.setNama(nama);
	
	cout << "Halo " << data.getNama() << " Selamat Datang di Perpustakaan!" << endl;
	while (true) {
		cout << "1. Pinjam Buku" << endl
			 << "2. Kembalikan Buku" << endl
			 << "3. Exit" << endl
			 << "Pilih = ";
		cin >> p;
		cin.ignore();
		
		if (p == 1){
			cout << "Masukkan judul buku yang ingin dipinjam = ";
			getline(cin, jb);
			data.pinjamBuku(jb);
		}
		else if (p == 2) {
			cout << "Masukkan judul buku yang ingin dikembalikan = ";
			getline(cin, jb);
			data.kembalikanBuku(jb);	
		}
		else if (p == 3) {
			cout << "Program Selesai";
			return 0;
		}
		else {
			cout << "Pilihan tidak valid" << endl;
		}
	}

	return 0;
}

