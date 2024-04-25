#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string buku, rak;
};

string cariRak(const Barang daftar[], int n, string judulBuku) {
    for (int i = 0; i < n; i++) {
        if (daftar[i].buku == judulBuku) {
            return daftar[i].rak;
        }
    }
    return "Tidak Ditemukan";
}

int main() {
    Barang daftarBuku[5] = {
        {"Harry Potter", "A1"},
        {"JINX", "B2"},
        {"Nakyum", "C3"},
        {"BJ Alex", "D4"},
        {"Si Kancil", "E5"}
    };
    cout << "Pilih Buku yang Dicari : ";
    string judulBuku;
    getline(cin, judulBuku);
    
    string rak = cariRak(daftarBuku, 5, judulBuku);

    if (rak != "Tidak Ditemukan") {
        cout << "Buku \"" << judulBuku << "\" Ada di rak - " << rak << "." << endl;
    } else {
        cout << "Buku \"" << judulBuku << "\" Tidak ditemukan di Rak manapun." << endl;
    }
    return 0;
}

