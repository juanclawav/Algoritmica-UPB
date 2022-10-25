#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
using namespace std;

vector<pair<int, int>> grafo[100000];
vector<pair<int,int>> mst[100000];
set <int> nodos[100000];
multiset<pair<int,int>> pQueue;

int visited[100000];
int parent[100000];
int parentWeight[100000];
int edges;
int nodes;

void prim(int start){
    pQueue.insert(make_pair(0, start));
    memset(visited, false, sizeof(visited));
    while (!pQueue.empty()){
        pair<int, int> current = *pQueue.begin();
        pQueue.erase(pQueue.begin());
        int currentV = current.second;
        if (!visited[currentV]){
            visited[currentV] = true;
            for (int i = 0; i < grafo[currentV].size(); i++){
                int neighbor = grafo[currentV][i].first;
                int nbrWght = grafo[currentV][i].second;
                if(!visited[neighbor]){
                    if(parent[neighbor]==-1 || (nbrWght<parentWeight[neighbor])){
                        parent[neighbor]=currentV;
                        parentWeight[neighbor]=nbrWght;
                    }
                    pQueue.insert(make_pair(nbrWght, neighbor));
                }
            }
            if(parent[currentV]!=-1 && parentWeight[currentV]!=-1 ){
                mst[currentV].push_back(
                            make_pair(parent[currentV],parentWeight[currentV]));
                mst[parent[currentV]].push_back(
                            make_pair(currentV,parentWeight[currentV]));
            }
            

        }
    }
}


int main(){
    input;
    cin>>nodes>>edges;
    
    for (int i = 0; i < edges; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        grafo[a].push_back(make_pair(b,c));
        grafo[b].push_back(make_pair(a,c));
    }
    memset(parent, -1, sizeof(parent));
    memset(parentWeight, -1, sizeof(parentWeight));
    int start;
    cin>>start;
    start--;
    prim(start);
    return 0;
}