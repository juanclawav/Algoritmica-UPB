#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

int main() {
    int N; 
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
        cin>>arr.at(i);
    for(int i = 1; i<N; i++){
        int j = i-1;
        while(j>=0 && arr.at(j)>=arr.at(i)){
            j--;
        }
        if(j==-1){
            cout<<j<<" ";
        }
        else{
            cout<<arr.at(j)<<" ";
        }
            
    }
    return 0;
}