#include <bits/stdc++.h>

using namespace std;

#define INF INT_MAX;

// VARIABLE GLOBALS
int v, a;


int getNearest(int dist[], bool visited[]) {
    int minValue = INF;
    int minNode = 0;
    for (int i = 0; i < v; i++) {
        if (!visited[i] && dist[i] < minValue) {
            minValue = dist[i];
            minNode = i;
        }
    }
    return minNode;
}

void dijkstra(int v, int dist[], bool visited[], int **cost, int parent[]) {
    for (int i = 0; i < v; i++) {
        int nearest = getNearest(dist, visited);
        visited[nearest] = true;

        for (int adj = 0; adj < v; adj++) {
            if (cost[nearest][adj] != INT_MAX && (dist[adj] > dist[nearest]+cost[nearest][adj])) {
                dist[adj] = dist[nearest]+cost[nearest][adj];
                parent[adj] = nearest;
            }
        }
    }
}


int main() {
    cin >> v >> a;
    // ADJACENCY MATRIX AND COST ARRAY
    int dist[v]= {};
    int** cost = new int*[v];
    for (int i = 0; i < v; i++)
        cost[i] = new int[v];
    bool visited[v] = {0};
    int parent[v] {0};
    // INITIALIZATION OF DIST ARRAY TO INF
    for (int i = 1; i < v; i++){
        dist[i] = INF;
        parent[i] = i;
    } 
    for (int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) cost[i][j] = 0;
    }
    // INPUT OF THE ADJACENCY MARTRIX
    for (int i = 0; i < a; i++) {
        int src, destiny, w; cin >> src >> destiny >> w;
        cost[src][destiny] = w;
    }
    // SET THE 0 VALUES OF THE MATRIX TO INFINITY TO APPLY DIJSKTRA
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            if (i != j && cost[i][j] == 0) cost[i][j] = INF;
        }
    }
    // Set the source node = 0
    // int src = 0;
    // cout << endl;
    // for (int i = 0; i < v; i++) {
    //     for (int j = 0; j < v; j++) {
    //         cout << cost[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    dijkstra(v, dist, visited, cost, parent);
    // for (int i = 0; i < v; i++) cout << dist[i] << " ";
    cout <<dist[v-1]<< endl;
    return 0;
}