//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Graph {
//private:
//    int jumlahKota;
//    vector <vector <int> >costMatrix;
//
//public:
//    Graph(int kota) : jumlahKota(kota) {
//        costMatrix.resize(jumlahKota, vector<int>(jumlahKota));
//    }
//
//    void inputCostMatrix() {
//        for (int i = 0; i < jumlahKota; ++i) {
//            cout << "cost elemen baris ke - " << i + 1 << endl;
//            for (int j = 0; j < jumlahKota; ++j) {
//                cin >> costMatrix[i][j];
//                if (i != j && costMatrix[i][j] == 0) {
//                    costMatrix[i][j] = INT_MAX; // No path from i to j
//                }
//            }
//        }
//    }
//
//    void printCostMatrix() {
//        cout << "\nCost List " << endl;
//        for (int i = 0; i < jumlahKota; ++i) {
//            for (int j = 0; j < jumlahKota; ++j) {
//                if (costMatrix[i][j] == INT_MAX) {
//                    cout << "INF ";
//                } else {
//                    cout << costMatrix[i][j] << " ";
//                }
//            }
//            cout << endl;
//        }
//    }
//
//    void floydWarshall() {
//        vector <vector <int> >dist = costMatrix;
//        vector <vector <int> >next(jumlahKota, vector<int>(jumlahKota, -1));
//
//        for (int i = 0; i < jumlahKota; ++i) {
//            for (int j = 0; j < jumlahKota; ++j) {
//                if (costMatrix[i][j] != INT_MAX && i != j) {
//                    next[i][j] = j;
//                }
//            }
//        }
//
//        for (int k = 0; k < jumlahKota; ++k) {
//            for (int i = 0; i < jumlahKota; ++i) {
//                for (int j = 0; j < jumlahKota; ++j) {
//                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
//                        dist[i][j] = dist[i][k] + dist[k][j];
//                        next[i][j] = next[i][k];
//                    }
//                }
//            }
//        }
//    }
//};
//
//int main() {
//    int jumlahKota;
//    cout << "Masukan Jumlah Kota = ";
//    cin >> jumlahKota;
//    cout << "Nilai Cost Matriks \n";
//
//    Graph graph(jumlahKota);
//    graph.inputCostMatrix();
//    graph.printCostMatrix();
//    graph.floydWarshall();
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MAX = 100;
//
//vector<int> ketetanggaan[MAX]; //untuk menyimpan ketetanggaan
//int n = 5;
//
//// Fungsi untuk menambahkan edge ke dalam graf
//void addEdge(int x, int y) {
//    ketetanggaan[x].push_back(y);
//    ketetanggaan[y].push_back(x); // Karena graf tidak berarah
//}
//
//// Fungsi untuk menampilkan ketetanggannya graf
//void displayGraph() {
//    cout << "Daftar Ketetanggaan (Graph Tidak Berarah) :" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "Simpul " << i << " :";
//        for (int j = 0; j < ketetanggaan[i].size(); j++) {
//            cout << " -> " << ketetanggaan[i][j];
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    // Menambahkan edge sesuai dengan contoh
//    addEdge(0, 1);
//    addEdge(0, 4);
//    addEdge(1, 2);
//    addEdge(1, 3);
//    addEdge(1, 4);
//    addEdge(2, 3);
//    addEdge(3, 4);
//
//    // Menampilkan graf
//    displayGraph();
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MAX = 100;
//
//vector<int> ketetanggaan[MAX]; // untuk menyimpan ketetanggaan
//int n = 5;
//
//// Fungsi untuk menambahkan edge ke dalam graf berarah
//void addEdge(int x, int y) {
//    ketetanggaan[x].push_back(y); // Hanya menambahkan arah dari x ke y
//}
//
//// Fungsi untuk menampilkan ketetanggannya graf
//void displayGraph() {
//    cout << "Daftar Ketetanggaan (Graph Berarah) :" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "Simpul " << i << " :";
//        for (int j = 0; j < ketetanggaan[i].size(); j++) {
//            cout << " -> " << ketetanggaan[i][j];
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    // Menambahkan edge sesuai dengan contoh
//    addEdge(0, 1);
//    addEdge(0, 4);
//    addEdge(1, 2);
//    addEdge(1, 3);
//    addEdge(1, 4);
//    addEdge(2, 3);
//    addEdge(3, 4);
//
//    // Menampilkan graf
//    displayGraph();
//
//    return 0;
//}


#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

// Untuk menyimpan ketetanggaan dan bobotnya
vector<pair<int, int> > ketetanggaan[MAX]; 
int n = 5;

// Fungsi untuk menambahkan edge berbobot ke dalam graf berarah
void addEdge(int x, int y, int bobot) {
    ketetanggaan[x].push_back(make_pair(y, bobot)); // Menambahkan arah dari x ke y dengan bobot
}

// Fungsi untuk menampilkan ketetanggannya graf
void displayGraph() {
    cout << "Daftar Ketetanggaan (Berbobot) :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Simpul " << i << " :";
        for (int j = 0; j < ketetanggaan[i].size(); j++) {
            cout << " -> (" << ketetanggaan[i][j].first << ", " << ketetanggaan[i][j].second << ")";
        }
        cout << endl;
    }
}

int main() {
    // Menambahkan edge berbobot sesuai dengan contoh
    addEdge(0, 1, 10);
    addEdge(0, 4, 20);
    addEdge(1, 2, 30);
    addEdge(1, 3, 40);
    addEdge(1, 4, 50);
    addEdge(2, 3, 60);
    addEdge(3, 4, 70);

    // Menampilkan graf
    displayGraph();

    return 0;
}





