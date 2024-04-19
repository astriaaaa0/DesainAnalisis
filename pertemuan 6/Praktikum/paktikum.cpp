#include <iostream>
using namespace std;

class Karyawan {
	private:
		int gaji; //atribut
		
	public :
		void setGaji (int s){ //metode fungsi2nya
			gaji = s;
		}
		
		int getGaji(){
			return gaji;
		}
};

int main (){
	Karyawan myObj;
	myObj.setGaji(50000);
	cout << myObj.getGaji();
	
	return 0;
}

#include <iostream>
using namespace std;

//class induk
class BangunDatar{
	protected:
		int lebar, tinggi;
		
	public:
		void setValue (int a, int b){
			lebar = a;
			tinggi = b;
		}
};

//class turunan
class PersegiPanjang: public BangunDatar{
	public:
		int getValue(){
			return (lebar*tinggi);
		}
};

//class turunan
class Segitiga: public BangunDatar {
	public:
		int getValue(){
			return (lebar*tinggi/2);
		}
};

//program utama
int main (){
	
	//inisialisasi object
	PersegiPanjang persegi_panjang;
	Segitiga segitiga;
	
	//Inisiasi Nilai
	persegi_panjang.setValue(4,5);
	segitiga.setValue(10,5);
	
	//Mendapatkan Nilai Kembalian
	cout << persegi_panjang.getValue() << endl;
	cout << segitiga.getValue() << endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Hewan {
	public:
		virtual void bersuara(){
			cout << "..." << endl;
		}
};

class Kucing : public Hewan {
	public:
		void bersuara(){
			cout << "Meow" << endl;
		}
};

class Kambing : public Hewan {
	public:
		void bersuara(){
			cout << "Mbeek" << endl;
		}
};

int main (){
	Hewan *h1 = new Kucing();
	Hewan *h2 = new Kambing();
	
	h1->bersuara();
	h2->bersuara();
	
	return 0;
}
