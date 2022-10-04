#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    int R;
    int rows [m][n];
    int trans [n][m];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            rows[i][j]=0;
            trans[j][i]=0;
     }
     }
    for(int i=0;i<m;i++){
        vector<int> indexes;
        cin>>R;
        for(int j=0;j<R;j++){
            int index;
            cin>> index;
            index-=1;
            indexes.push_back(index);
        }
        for(int k=0;k<R;k++){
            int element;
            cin>>element;
            rows[i][indexes.at(k)]=element;
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=rows[j][i];
        }
     }
     cout<<n<<" "<<m<<endl;
     for(int i=0;i<n;i++){
        int r=0;
        for(int j=0;j<m;j++){
           if(trans[i][j]!=0){
               r+=1;
           }
        }
        cout<<r<<" ";
        for(int l=0;l<m;l++){
           if(trans[i][l]!=0){
               cout<<(l+1)<<" ";
           }
        }
        cout<<endl;
        for(int s=0;s<m;s++){
           if(trans[i][s]!=0){
               cout<<trans[i][s]<<" ";
           }
 
     }
     cout<<endl;
     }
     return 0;
}