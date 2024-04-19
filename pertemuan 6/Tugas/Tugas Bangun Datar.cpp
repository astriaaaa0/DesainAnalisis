#include <iostream>
using namespace std;
//override digunakan ketika ada banyak calss (menumpuk) dan fungsi yang dipakai tetap yang di class tersebut
//sebernernya masih belum ngerti sama override, tpi sepemahaman saya kaya penjelasan diatas ^-^

class BangunDatar {
public:
    virtual int luas() = 0; // untung membuat abstraksi class
};

class PersegiPanjang : public BangunDatar {
private:
    int panjang, lebar;
public:
    PersegiPanjang(int p, int l) : panjang(p), lebar(l) {}
    int luas() override {
        return panjang * lebar;
    }
};

class Segitiga : public BangunDatar {
private:
    int alas, tinggi;
public:
    Segitiga(int a, int t) : alas(a), tinggi(t) {}
    int luas() override {
        return alas * tinggi / 2;
    }
};

class Persegi : public BangunDatar {
private:
    int sisi;
public:
    Persegi(int s) : sisi(s) {}
    int luas() override {
        return sisi * sisi;
    }
};

int main() {
    BangunDatar* bangunDatar[] = {new PersegiPanjang(0, 0), new Segitiga(0, 0), new Persegi(0)};
    int panjang, lebar, alas, tinggi, sisi;  //deklarasi
    
    cout << "Masukan Panjang Persegi Panjang = ";
    cin >> panjang;
    cout << "Masukan Lebar Persegi Panjang = ";
    cin >> lebar;
    cout << "Masukan Alas Segitiga = ";
    cin >> alas;
    cout << "Masukan Tinggi segitiga = ";
    cin >> tinggi;
    cout << "Masukan Sisi Persegi = ";
    cin >> sisi;
    
    bangunDatar[0] = new PersegiPanjang(panjang, lebar);
    bangunDatar[1] = new Segitiga(alas, tinggi);
    bangunDatar[2] = new Persegi(sisi);
    
	cout<<"\nLuas Bangun Datar = "<<endl;
    cout << "Luas Persegi Panjang = " << bangunDatar[0]->luas() << endl;
    cout << "Luas Segitiga = " << bangunDatar[1]->luas() << endl;
    cout << "Luas Persegi = " << bangunDatar[2]->luas() << endl;

    return 0;
}




