#include<bits/stdc++.h>
using namespace std;
int graph[100][100];

int main () {
    int V, E;
    cin>> V>>E;
    for (int i=0; i<E; i++) {
        int u, v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
    for (int i=0; i<V; i++) {
        cout << i<< " -> ";
        for (int j=0; j<V; j++) {
            if (graph[i][j]==1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for (int i=0; i<V; i++) {
        for (int j=0; j<V; j++) {
            cout << graph[i][j]<<" ";
        }
        cout << endl;
    }
}
