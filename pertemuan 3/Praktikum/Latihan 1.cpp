#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	private:
	string nama;
	int npm;
	
	public:
	void setNama(string n){
		nama = n;
	}
	void setNpm(int p){
		npm = p;
	}
	
	string getNama(){
		return nama;
	}
	
	int getNpm(){
		return npm;
	}
};

int main ()
{
	Mahasiswa mahasiswa;
	string nama;
	int no;
	
	cout << "Nama : " ;
	getline (cin, nama);
	
	mahasiswa.setNama(nama);
	
	cout << "Npm : " ;
	cin >> no;
	mahasiswa.setNpm(no);
	cout << endl;
	cout << "Nama : " << mahasiswa.getNama() << endl;
	cout << "Npm : " << mahasiswa.getNpm() <<endl;

	
	
}
