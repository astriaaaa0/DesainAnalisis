#include <iostream>
using namespace std;

class Kendaraan {
protected:
    string merk;
    int tahun, jumlah;

public:
    Kendaraan(string _merk = "", int _tahun = 0, int _jumlah = 0) : merk(_merk), tahun(_tahun), jumlah(_jumlah) {}

    void setMerk(string a) {
        merk = a;
    }
    string getMerk() {
        return merk;
    }
    void setTahun(int b) {
        tahun = b;
    }
    int getTahun() {
        return tahun;
    }
    void setJumlah(int c) {
        jumlah = c;
    }
    int getJumlah() {
        return jumlah;
    }
    void printInfo() {
        cout << "Merk = " << merk << endl;
        cout << "Tahun Produksi = " << tahun << endl;
    }
};

class Mobil : public Kendaraan {
public:
    Mobil(string _merk = "", int _tahun = 0, int _jumlah = 0) : Kendaraan(_merk, _tahun, _jumlah) {}

    void printInfo() {
        Kendaraan::printInfo(); // manggil induk class printInfo
        cout << "Jumlah Pintu = " << jumlah << endl;
    }
};

int main() {
    string merk;
    int tahun, jumlah;

    cout << "Masukan Merk Mobil = ";
    cin >> merk;
    cout << "Masukan Tahun Produksi Mobil = ";
    cin >> tahun;
    cout << "Masukan Jumlah Pintu Mobil = ";
    cin >> jumlah;

    Mobil mobil(merk, tahun, jumlah);
    cout << "\nInformasi Mobil : " << endl;
    mobil.printInfo();

    return 0;
}

