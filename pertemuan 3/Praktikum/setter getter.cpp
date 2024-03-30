#include <iostream>
using namespace std;

class silsilah {
	protected:
		string orangtuaa = " nAlbert Wijaya dan Jeny Lim";
		string anakanak = "Agatha a dan jonathan Wijaya";
		
		public:
		string cekSilsilah (){
			// Mengubah teks statis menjadi teks yang mengekstrak nama orangtua dari variabel yang sudah ada
			return "Ayah bernama " + orangtua.substr(0, orangtua.find(" "))+
			" dan Ibu bernama "+ orangtua.substr(0, orangtua.find(" ")+4);	
		}
}; 


class cucu : public Silsilah {
	protected:
		string cucu = "Wilbert Tan dan Rayanza wijaya ":
			
			public:
				string cekAnak(){
					// Mengubah teks statis menjadi teks yang mengekstrak nama anakanak dari variabel yang sudah ada
					return "Anak PErtama keluarga Wijaya adalah "+anakanak.substr(0, anakanak.find(" "))+
				}
};

class Anak : public cucu {
	public:
		string lihatSilsilahnya(){
			return "Silsilah Keluarga WIjaya";
		}
		
		string cekCucu(){
			// Mengubah teks statis menjadi teks yang mengekstrak nama cucu dari variabel yang sudah ada
			return "Cucu pertama bernama "+cucu.substr(0, cucu.find(" "))+
			" dan Cucu kedua bernama " + cucu.substr(cucu.find(" ")+4)
		}
};

int main (){
	Anak silsilahWijaya;
	
	// Output hasil dari metode-metode dalam kelas anak
	
	cout << silsilahWijaya.lihatSilsilahnya() << endl;
	cout << silsislahWijaya.cekSilsilahnya() << endl;
	cout << silsilahWijaya.cekAnak() << endl;
	cout << silsilahWijaya.cekCucu() << endl;
}
