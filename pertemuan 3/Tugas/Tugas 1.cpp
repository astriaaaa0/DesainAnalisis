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
	void setNpm(int m){
		npm = m;
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
	Mahasiswa mahasiswa[3];
	string nama;
	int npmm;
	
	for (int i = 0; i < 3; i++){
	cout<<"===============================\n";
	cout << "Masukkan Nama Mahasiswa " << i+1 << " = ";
	getline (cin, nama);
	
	mahasiswa[i].setNama(nama);
	
	cout << "Masukkan NPM Mahasiswa " << i+1 << " = ";
	cin >> npmm;	
	cin.ignore();
	mahasiswa[i].setNpm(npmm);
	cout << endl;
}	cout<<"=====================\n";
	cout << "Data Mahasiswa = \n";
	cout<<"=====================\n";
	for(int i = 0; i < 3; i++){
	
	cout << "Mahasiswa " << i+1 << " = " << endl;
	cout << "Nama = " << mahasiswa[i].getNama() << endl;
	cout << "NPM = " << mahasiswa[i].getNpm() << endl;
	cout << endl;
	}
}
