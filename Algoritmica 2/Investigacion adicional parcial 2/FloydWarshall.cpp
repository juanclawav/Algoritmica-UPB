#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std; 

int V; 

int GRAFO[100][100];
int dist[100][100];

void floydWarshall() { 
    for(int k = 0; k<V; k++) 
        for(int i = 0; i<V; i++) 
            for(int j = 0; j<V; j++) 
                dist[i][j] = min(GRAFO[i][j], GRAFO[i][k] + GRAFO[k][j]);
