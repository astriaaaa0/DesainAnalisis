#include <iostream>
#include <vector>
using namespace std;

//kelas untuk merepesentasikan graf
class Graph{
	private:
		int jumlahSimpul; //jumlah simpul dalam graf
		vector <vector <int>  >matriksKetetanggaan; //matriks ketetanggaan
	public:
		//konstruktor
		Graph (int simpul)
		: jumlahSimpul (simpul){
	
		//Inisialisasi matriks ketetanggaan dengan nol
		for (int i = 0; i < simpul; ++i){
			vector <int> baris (simpul, 0);
			matriksKetetanggaan.push_back(baris);
		}
	}

	//menambahkan sisi (edge) ke dalam graf
	void tambahSisi (int u, int v){
		if (u >= 0 && u < jumlahSimpul && v >= 0 && v < jumlahSimpul){
			matriksKetetanggaan [u][v] = 1;
			matriksKetetanggaan [v][u] = 1;
		}else {
		 cout<<"Sisi tidak valid!"<<endl;
	}
}	
	//menghapus sisi (edge) dari graf
	void hapusSisi(int u, int v){
		if (u >= 0 && u < jumlahSimpul && v >= 0 && v < jumlahSimpul) {
			matriksKetetanggaan [u][v] = 0;
			matriksKetetanggaan [v][u] = 0; //line ini untuk undirected graph, comment line ini jika graph nya directed
		}else {
			cout<<"Sisi tidak valid!";
		}
	}
	
	//menampilkan matriks ketetanggaan
	void tampilkan(){
		for (int i = 0; i < jumlahSimpul; i++){
			for (int j = 0; j < jumlahSimpul; j++){
				cout<<matriksKetetanggaan[i][j] << " ";
			}
			cout<<endl;
		}
	}
};

//fungsi utama
int main (){
	int simpul = 5;
	Graph g(simpul);
	
	//menambahkan sisi - sisi ke daalam graf
	g.tambahSisi (0, 1);
	g.tambahSisi (0, 4);
	g.tambahSisi (1, 2);
	g.tambahSisi (1, 4);
	g.tambahSisi (2, 3);
	g.tambahSisi (3, 4);
	g.tambahSisi (1, 3); //ditambahkan ini ya gais
	
	//menampilkan matriks ketetanggan
	cout<< "Matriks Ketetanggaan = "<< endl;
	g.tampilkan(); //tambahin ini juga
	
	//menghapus sebuah sisi dari graf
	g.hapusSisi (1, 3);
	cout<< "Matriks Ketetanggaan setelah menghapus sisi antara 1 dan 3 = "<< endl;
	g.tampilkan();
	
	return 0;
}
