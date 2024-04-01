#include <iostream>
#include <string>

using namespace std;

class infokontak {
private:
    string nama;
    int num;

public:
    infokontak() {}
    infokontak(string nama, int num) : nama(nama), num(num) {}

    void data() {
        cout << "Nama Kontak = " << nama << endl
             << "Nomor Kontak = " << num << endl;
    }
};

int main() {
    const int jk = 10;
    string nama;
    int num;

    infokontak kontak[jk];
    int k = 0;
	cout<<"Masukan kontak (Maksimal 10).\n";
    char status = 'y';
    while (status == 'y' || status == 'Y') {
        cout << "Masukkan Nama Kontak: ";
        getline(cin, nama);
        cout << "Masukkan Nomor Kontak = ";
        cin >> num;
        cin.ignore();

        kontak[k] = infokontak(nama, num);
        k++;

        cout << "Apakah Anda Ingin Menambahkan Kontak Lagi (y/n)? = ";
        cin >> status;
        cin.ignore();
        while (status != 'y' && status != 'Y' && status != 'n' && status != 'N') {
            cout << "Tidak Valid, Silahkan Pilih (y/n). ";
            cin >> status;
            cin.ignore();
        }
    }

    cout << endl;
    cout << "Daftar Kontak = \n";
    for (int i = 0; i < k; ++i) {
        cout << "Data Kontak Ke - " << i + 1 << ":\n";
        kontak[i].data();
        cout << "---------------------------" << endl;
    }

    return 0;
}

