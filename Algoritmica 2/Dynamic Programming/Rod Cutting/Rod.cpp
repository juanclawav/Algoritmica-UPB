#include <iostream>
#include <bits/stdc++.h> 
#define INF 100000010
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int dp[100010];
int price[100010];
int parent[100010];
int n, m, rodLength;

void rodCutting() {
   dp[0] = 0;

   for (int i = 1; i<=n; i++) {
      for (int j = 1; j <= i; j++){
        int tmp = price[j] + dp[i-j];
        if(tmp > dp[i]){
          dp[i] = tmp;
          parent[i] =j;
        }
      }
   }
}

vector<int> combination(int n){
  vector<int> combination;
   while(n){
    combination.push_back(parent[n]);
    n -= parent[n];
   }
  return combination;
}

int main() {
  memset(price,0,sizeof(price));
  memset(parent,0,sizeof(parent));
  memset(dp,0,sizeof(dp));
  cin>>n;
  for(int i=1; i<=n;i++){
    cin>>price[i];
  }
  rodCutting();
  cin>>m;
  for(int i=0; i<m;i++){
    cin>> rodLength;
    cout << "Maximo "<< dp[rodLength]<<endl;
    vector<int> aux = combination(rodLength);
    for(auto a : aux){
      cout<<a<<" ";
    }
    cout<<endl;
  }
  
}
