//selalu penjumlahan dan angka harus positif

#include <iostream>
#include <bits/stdc++.h>
#define MAX 100005
#define INF INT_MAX

using namespace std;

vector<pair<int, int> > adj[MAX];
bool vis[MAX];
int dist[MAX];

void dijkstra(int start){
    memset(vis, false, sizeof vis);
    for (int i = 0; i < MAX; i++)
        dist[i] = INF;
    dist[start] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push({0, start});
    
    while (!pq.empty()){
        pair<int, int> p = pq.top();
        pq.pop();
        
        int x = p.second;
        if (vis[x])
            continue;
        vis[x] = true;
        
        for (int i = 0; i < adj[x].size(); i++){
            int e = adj[x][i].first;
            int w = adj[x][i].second;
            if (dist[x] + w < dist[e]){
                dist[e] = dist[x] + w;
                pq.push({dist[e], e});
            }
        }
    } 
}

int main (){
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    adj[2].push_back({3, 2});
    adj[3].push_back({2, 2});
    adj[3].push_back({4, 4});
    adj[3].push_back({5, 5});
    adj[4].push_back({3, 4});
    adj[5].push_back({3, 5});
    
    dijkstra(1);
    
    cout << "Jarak terpendek dari node 1 ke node 5 adalah " << dist[3] << endl;
    
    return 0;
}

/* */

//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define M 1000
//
//using namespace std;
//
//using namespace std;
//
//const int N = 5;
//
//void dijkstra (int graph [N][N], int source, int destination){
//	vector<pair<int, int> > adj[N];
//	for (int i=0; i < N; i++){
//		for (int j = 0; j < N; j++){
//			if (graph[i][j]!=M){
//				adj[i].push_back(make_pair(j, graph[i][j])); 
//			}
//		}
//	}
//int Q[N], R[N];
//	for (int i=0; i<N; i++){
//		Q[i]=M;
//		R[i]= -1;
//	}
//
// priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int,int> > > pq;
// pq.push(make_pair(0, source-1));
// Q[source-1]=0;
// while (!pq.empty()){
// 	int u = pq.top().second;
// 	pq.pop();
//
//	for (int i=0; i < adj[u].size();i++){
//		int v = adj [u][i].first;
//		int w = adj [u][i].second;
//		
//		if (Q[v]> Q[u] + w){
//			Q[v] = Q[u] + w;
//			R[v] = u;
//			pq.push(make_pair(Q[v], v));
//		}
//	}
//}
//
//	cout << "Beban = ";
//	for (int i = 0; i<N; i++){
//		cout << Q[i]<< " ";
//	}
//	
//	cout << endl;
//	cout << "Rute = ";
//	for (int i = 0; i < N; i++){
//		cout << R[i] << "  ";
//	} 
//	cout << endl;
//}
//
//int main (){
//	int graph [N][N]= {{0, 1, 3, M, M},
//						{M, 0, 1, M, 5},
//						{3, M, 0, 2, M},
//						{M, M, M, 0, 1},
//						{M, M, M, M, 0}};
//						
//	int source, destination;
//	cout << "Masukkan node asal : ";
//	cin >> source;
//	cout << "Masukkan node tujuan : ";
//	cin >> destination;
//	
//	dijkstra (graph, source, destination);
//	
//	return 0;
//}
