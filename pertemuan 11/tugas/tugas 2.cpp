#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
#define MAX 100005
#define INF INT_MAX

using namespace std;

vector<pair<int, int> > adj[MAX];
bool vis[MAX];
int dist[MAX];
int parent[MAX];

void dijkstra(int start) {
    memset(vis, false, sizeof vis);
    for (int i = 0; i < MAX; i++) {
        dist[i] = INF;
        parent[i] = -1;
    }
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push({0, start});

    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();

        int x = p.second;
        if (vis[x])
            continue;
        vis[x] = true;

        for (int i = 0; i < adj[x].size(); i++) {
            int e = adj[x][i].first;
            int w = adj[x][i].second;
            if (dist[x] + w < dist[e]) {
                dist[e] = dist[x] + w;
                parent[e] = x; 
                pq.push({dist[e], e});
            }
        }
    }
}

void printPath(int end) {
    vector<int> path;
    for (int v = end; v != -1; v = parent[v]) {
        path.push_back(v);
    }

    cout << "Rute terpendek : ";
    for (size_t i = 0; i < path.size(); ++i) {
        if (i > 0) cout << " -> ";
        cout << path[i];
    }
    cout << endl;
}

int main() {
    adj[1].push_back({2, 7});
    adj[1].push_back({3, 9});
    adj[1].push_back({6, 14});

    adj[2].push_back({1, 7});
    adj[2].push_back({3, 10});
    adj[2].push_back({4, 15});

    adj[3].push_back({1, 9});
    adj[3].push_back({2, 10});
    adj[3].push_back({4, 11});
    adj[3].push_back({6, 2});

    adj[4].push_back({2, 15});
    adj[4].push_back({3, 11});
    adj[4].push_back({5, 6});

    adj[5].push_back({4, 6});
    adj[5].push_back({6, 9});

    adj[6].push_back({1, 14});
    adj[6].push_back({3, 2});
    adj[6].push_back({5, 9});
	
	int start = 1;
	int end = 6;
    dijkstra(start);

    cout << "Jarak terpendek dari node "<< start <<" ke node "<<end<<" adalah " << dist[end] << endl;

    // Menampilkan rute terpendek dari node 1 ke node 6
    printPath(6);

    return 0;
}

