////NODE SEBUTAN UNTUK VERTEX
////EDGE ITU SEBUTAN UNTUK GARIS ATAU PANAH
//
//#include <iostream>
//#include <vector> //buat manggil graph
//using namespace std;
//
//const int MAX = 100;
//
//int graph [MAX][MAX];
//int n;
//
//void addEdge (int x, int y){
//	graph [x][y] = 1;
//	graph [y][x] = 1;
//}
//
//void displayGraph (){
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			cout<< graph [i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main (){
//	cout <<"Masukan jumlah dimensi array ";
//	cin >> n;
//	
//	addEdge (0, 1);
//	addEdge (0, 2);
//	addEdge (1, 2);
//	addEdge (2, 3);
//	
//	displayGraph ();
//	
//	return 0;
//}


#include <iostream>
#include <cstring>

using namespace std;

const int N = 100;
int dist [N][N];

void floydWarshall (int n){
	for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++){
			for (int j = 0; j<n; j++){
				if (dist[i][k] + dist[k][j] < dist [i][j]){
					dist [i][j] = dist [i][k] + dist [k][j];
				}
			}
		}
	}
}

int main(){
	int n;
	cout << "Masukkan jumlah node pada graph: ";
	cin >> n;
	memset (dist, 0x3f, sizeof dist);
	for (int i = 0; i < n; i++){
		dist [i][i] = 0;
	}
	cout << "Masukkan jarak antar node: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			int w;
			cin >> w;
			dist [i][j]=w;
		}
	}
	floydWarshall(n);
	cout << "Hasil jalur terpendek antar node: "<< endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j <n; j++){
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

