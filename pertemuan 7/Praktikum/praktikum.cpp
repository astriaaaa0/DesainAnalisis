//#include <iostream>
//using namespace std;
//
//int main (){
//	//deklarasi variabel
//	int Nilai[20];
//	int Posisi[20];int main
//	int i, n, Bil, jumlah=0;
//	bool ketemu;
//	
//	cout<<"Masukan Jumlah Deret Bilangan = ";
//	cin>>n;
//	cout<<endl;
//	
//	//membaca elemen array
//	for(i=0; i<n; i++){
//		cout<<"Nilai bilangan ke - "<<i<<" = ";
//		cin>>Nilai[i];
//	}
//	//mencetak elemen array
//	cout<<"\n\Deret Bilangan = ";
//	for(i=0; i<n; i++)
//		cout<<Nilai[i]<<" ";
//	cout<<"\n\nMasukan Bilangan yang Dicari = ";
//	cin>>Bil;
//	
//	//melakukan pencarian 
//	for(i=0; i<n; i++){
//		if(Nilai[i]==Bil){
//			ketemu = true;//menandai bahwa bilangan ditemukan
//			Posisi[jumlah]=i;
//			jumlah++;
//		}
//	}//melakukan pencarian posisi deret
//	if (ketemu){
//		cout<<"Bilangan "<<Bil<<" Ditemukan sebanyak "<<jumlah;
//		cout<<"\nPada Posisi ke = ";
//		for(i=0; i<jumlah; i++){
//			cout<<Posisi[i]<<" ";
//		}
//	}
//	else 
//	cout<<"Maaf, Bilangan "<<Bil<<" Tidak ditemukan";
//	getchar();
//	
//}

//stop here

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100;
int nim[N];

//fungsi untuk melakukan binary search
int binarySearch(int x, int l, int r){
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (nim[mid] == x)
			return mid;
		if (nim[mid] > x)	
			return binarySearch (x, l, mid - 1);
		return binarySearch (x, mid + 1, r);
	}
	return -1;
}

int main () {
	int n;
	cout << "Masukkan jumlah mahasiswa : ";
	cin >> n;
	
	cout << "Masukkan NIM mahasiswa : ";
	for (int i = 0; i < n; i++) {
		cin >> nim [i];
	}
	
	// Mengurutkan NIM mahasiswa
	sort (nim, nim + n) ;
	int x;
	cout << "Masukkan NIM yang dicari: ";
	cin >> x;
	
	int hasil = binarySearch (x, 0, n - 1) ;
	if (hasil == -1)
	cout << "NIM tidak ditemukan" << endl;
	else
	cout << "NIM ditemukan pada indeks " << hasil
	<< endl;
	
	return 0;
}
