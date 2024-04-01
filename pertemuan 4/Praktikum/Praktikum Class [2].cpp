//#include <iostream>
//#include <string>
//
//using namespace std;
//class pelajar {	//Class Name
//	public:			//Access Specifier
//		pelajar (){	//Construtor
//			cout<<"Ini adalah materi C++ tentang constructors!";
//		}
//};
//
//int main (){
//	pelajar obj; 	//Membuat object dari sebuah class 
//	return 0;
//}

//

//#include <iostream>
//
//using namespace std;
//class laptop{
//	string pemilik;
//	string merk;
//	
//	public:
//	laptop(string var1, string var2){
//		pemilik = var1;
//		merk = var2;
//		cout<<"Paket Laptop "<<merk<<" milik "<<
//		pemilik
//		<<" sudah dikirim"<<endl;
//	}
//};
//
//int main(){
//	laptop laptopfadlan("Fadlan", "Asus");
//	laptop laptoprisma("Risma", "Acer");
//	laptop laptopcarlos ("Carlos", "Lenovo");
//	
//	return 0;
//}

//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
	public:
		mahasiswa (string nama, int umur)
		: nama_(nama), umur_(umur){
			cout<<"Constructor Mahasiswa"<<endl;
		}
		~mahasiswa (){
			cout<<"==Contoh Destructor Mahasiswa=="<<endl;
		}
		void tampilkanbiodata(){
			cout<<"Nama : "<<nama_<<endl;
			cout<<"Umur : "<<umur_<<endl;
		}
		
		private :
			string nama_;
			int umur_;
};

int main (){
	mahasiswa mhs("Katarina", 20);
	mhs.tampilkanbiodata();
	
return 0;
}




