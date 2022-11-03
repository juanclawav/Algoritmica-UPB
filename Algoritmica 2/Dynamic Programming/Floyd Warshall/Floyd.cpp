#include <iostream>
#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
#define INF 100000010
using namespace std;

int n, m;
int dp[10000][10000];
void floyd()
{
    int i, j, k;
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if ( (i != j) && (k!=j) && (k!=i))
                {
                        dp[i][j] = min(dp[i][k] + dp[k][j], dp[i][j]);
                }
            }
        }
    }
    
}
void print(){
    for (int i = 0; i < n; i++)
    {
        cout<<"\nCaminos para nodo: "<<i<<endl;
        for (int j = 0; j < n; j++)
        {
            if(dp[i][j]==INF){
                cout<<"X"<<"\t";
            } else{
                cout<<dp[i][j]<<"\t";
            }
        }
 
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            dp[i][j]=INF;
        }
    }

    for(int i=0; i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        dp[a][b]=c;
        //grafos no dirigidos:
        //dp[b][a]=c;
    }
    floyd();
    print();
}
