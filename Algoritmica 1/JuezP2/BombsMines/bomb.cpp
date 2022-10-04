#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 
int  grafo[1010][1010];
int  nivel[1010][1010];
int fila, columna;
void bfs(int nodoX, int nodoY) {
    queue<pair<int,int> > cola;
    cola.push(make_pair(nodoX, nodoY));
    grafo[nodoX][nodoY] = 1;
    nivel[nodoX][nodoY] = 0;
    while(!cola.empty()) {
        pair<int,int> actual = cola.front();
        cola.pop();
        int x = actual.first;
        int y = actual.second;
        if(x-1 >= 0 && grafo[x-1][y] == 0) {
            grafo[x-1][y] = 1;
            cola.push(make_pair(x-1, y));
            nivel[x-1][y] = nivel[x][y] + 1;
        }
        if(x+1 < fila && grafo[x+1][y] == 0) {
            grafo[x+1][y] = 1;
            cola.push(make_pair(x+1, y));
            nivel[x+1][y] = nivel[x][y] + 1;
        }
        if(y-1 >= 0 && grafo[x][y-1] == 0) {
            grafo[x][y-1] = 1;
            cola.push(make_pair(x, y-1));
            nivel[x][y-1] = nivel[x][y] + 1;
        }
        if(y+1 < columna && grafo[x][y+1] == 0) {
            grafo[x][y+1] = 1;
            cola.push(make_pair(x, y+1));
            nivel[x][y+1] = nivel[x][y] + 1;
        }
    }
}
int main() {
    input;
    while(cin>>fila>>columna) {
        if(fila==0 && columna==0) {
            break;
        }
        memset(grafo,0,sizeof(grafo));
        memset(nivel,0,sizeof(nivel));
        int filas;
        cin>>filas;
        for(int i=0;i<filas;i++) {
           int row; cin>>row;
           int bombs; cin>>bombs;
           for(int j=0;j<bombs;j++) {
               int col; cin>>col;
               grafo[row][col] = 1;
           }
        }
        int xinicio, yinicio, xfinal, yfinal;
        cin>>xinicio>>yinicio>>xfinal>>yfinal;
        bfs(xinicio, yinicio);
        cout<<nivel[xfinal][yfinal]<<endl;
    }
}