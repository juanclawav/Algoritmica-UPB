#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

int main(){
    input;
    int cases; 
    cin>>cases;
    vector<int> mids;
    while(mids.size()<cases){
        int students;
        cin>>students;
        int middle = students/2;
        for(int i=0;i<students;i++){
          int ages;
          cin>>ages;
          if(i == middle){
              mids.push_back(ages);
          }
        }
    }
    for(int j=1;j<=cases;j++){
        cout<<"Case "<<j<<": "<<mids.at(j-1)<<endl;
    }
    return 0; 
}