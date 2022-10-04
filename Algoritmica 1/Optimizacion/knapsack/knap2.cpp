#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 
int peso[]={5,7,8,15,25};
int ganancia[]={10,50,75,20,39};
int dp[10][10000];

int knap(int capacidad){
    for (int i=0;i<sizeof(dp[0]);i++){
        dp[0][i]=0;
    }
    for (int i=1;i<=5;i++){
        for (int j=0;j<=capacidad;j++){
            if(peso[i-1]<=j){
                dp[i][j]=max((ganancia[i-1]+dp[i-1][j-peso[i-1]]),dp[i-1][j]);
            }
        }
    }
    return dp[5][capacidad];
}
int main(){
    int capacidad = 59;
    memset(dp,0,sizeof(dp));
    cout<<knap(capacidad)<<endl;
}

