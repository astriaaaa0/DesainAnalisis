#include <iostream>
#include <string>
//const berfungsi agar nilai atau data yang taruh tidak bisa diubah

using namespace std;

// induk class
class Person {
protected:
    string nama;
    int usia;

public:
    virtual void setNama(const string& _nama) {
        nama = _nama;
    }

    virtual string getNama() const {
        return nama;
    }

    virtual void setUsia(int _usia) {
        usia = _usia;
    }

    virtual int getUsia() const {
        return usia;
    }

    virtual void printInfo() const {
        cout << "Nama = " << nama << endl;
        cout << "Usia = " << usia << endl;
    }
};

// Derived class
class Mahasiswa : public Person {
private:
    string status, jurusan, fakultas;

public:
    void setStatus(const string& _status) {
        status = _status;
    }

    string getStatus() const {
        return status;
    }

    void setJurusan(const string& _jurusan) {
        jurusan = _jurusan;
    }

    string getJurusan() const {
        return jurusan;
    }

    void setFakultas(const string& _fakultas) {
        fakultas = _fakultas;
    }

    string getFakultas() const {
        return fakultas;
    }

    void printInfo() const override {
        Person::printInfo(); // memanggil induk class
        cout << "Status Mahasiswa = " << status << endl;
        cout << "Jurusan = " << jurusan << endl;
        cout << "Fakultas = " << fakultas << endl;
    }
};

int main() {
    int n;
    cout << "Masukkan jumlah data = ";
    cin >> n;

    Mahasiswa* mhsArray = new Mahasiswa[n]; 
	// menyimpan array mahasiswa di n

    for (int i = 0; i < n; i++) {
        string nama, status, jurusan, fakultas;
        int usia;
        cout << "Masukkan Status (Alumni atau Mahasiswa Aktif): ";
        cin >> status;
        mhsArray[i].setStatus(status);
        cout << "Masukkan Nama = ";
        cin >> nama;
        mhsArray[i].setNama(nama);
        cout << "Masukkan Usia = ";
        cin >> usia;
        mhsArray[i].setUsia(usia);
        cout << "Masukkan Jurusan = ";
        cin >> jurusan;
        mhsArray[i].setJurusan(jurusan);
        cout << "Masukkan Fakultas = ";
        cin >> fakultas;
        mhsArray[i].setFakultas(fakultas);
    }

    // munculin urutan mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "\nInformasi Mahasiswa ke-" << (i + 1) << ":\n";
        mhsArray[i].printInfo();
    }

    return 0;
}


