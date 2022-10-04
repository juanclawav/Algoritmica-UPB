#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> cards;
    for (int i=0;i<N;i++){
        int card;
        cin>>card;
        cards.push_back(card);
    }
    int cont=0;
    int cont1=1;
    while(cont1>cont){
        bool change=false;
        if(!cards.empty()){
        for (int i=(cards.size()-1);i>0;i--){
            int f = cards.size()-1-i;
            int pair = cards.at(i)+cards.at(i-1);
            if(pair%2==0){
                if(f>0){
                    for(int j=i-1;j<cards.size()-1;j++){
                        if(j+2<cards.size()){
                        cards.at(j)=cards.at(j+2);
                        }
                    }
                    }
                cards.pop_back();
                cards.pop_back();
                change=true;
                i=i-1;
            }
        } 
        }
        if(!change){
            cont1=cont1-1;
        } 
    }
    cout<<cards.size();
}