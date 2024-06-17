#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
	int jumlahSimpul;
	vector <vector <int> >adjList;
	
	public:
		Graph (int simpul);
		void tambahTepi (int src, int dest);
		void cetakGraf ();
			
};	

Graph::Graph(int simpul) {
	jumlahSimpul = simpul;
	adjList.resize(simpul);
}

void Graph::tambahTepi (int src, int dest) {
	adjList[src].push_back(dest);
	adjList[dest].push_back(src);
}

void Graph::cetakGraf() {
	for (int i = 0; i < jumlahSimpul; i++) {
		cout<< "Simpul " << i << ": ";
		for (size_t j = 0; j < adjList[i].size(); ++j) {
			cout<< adjList[i][j] << " ";
		}
		cout<< endl;
	}
}

int main () {
	Graph g(5);
	queue <pair <int, int> >edges;
	
	g.tambahTepi(0, 1);
	g.tambahTepi(0, 4);
	g.tambahTepi(1, 2);
	g.tambahTepi(1, 3);
	g.tambahTepi(1, 4);
	g.tambahTepi(2, 3);
	g.tambahTepi(3, 4);
	
	
	while (!edges.empty()) {
		pair <int, int> edge = edges.front();
		g.tambahTepi(edge.first, edge.second);
		edges.pop();	
	}
	
	cout<< "Graf dengan daftar adjasi : \n";
	g.cetakGraf();

	return 0;
}
	 	

