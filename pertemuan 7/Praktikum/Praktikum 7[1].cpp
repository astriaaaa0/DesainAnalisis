#include <iostream>

using namespace std;

struct Barang {
    string nama;
    int harga;
};

int cariBarang(const Barang daftar[], int n, string barangDicari) {
    for (int i = 0; i < n; i++) {
        if (daftar[i].nama == barangDicari) {
            return i; 
        }
    }
    return -1;
}

int main() {
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pencil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };
	
	string barangDicari;
	cout << "Masukkan nama barang yang ingin dicari : ";
	cin >> barangDicari;
	
    int indeksBarang = cariBarang(daftarBarang, 5, barangDicari); 

    if (indeksBarang != -1) {
        cout << "Barang " << barangDicari << " ditemukan dengan harga Rp. " << daftarBarang[indeksBarang].harga << endl;
    } else {
        cout << "Barang " << barangDicari << " tidak ditemukan";
    }

    return 0;
}


