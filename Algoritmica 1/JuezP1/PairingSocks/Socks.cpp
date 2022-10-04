#include <stack>
#include <iostream>
#include <string>
using namespace std;
int main(){
int N;
int result=0;
stack<int> socks;
stack<int> aux;
cin>>N;
for (int i=0;i<2*N;i++){
    int sock;
cin>>sock;
socks.push(sock);
}
while(!socks.empty()){
    if(!aux.empty()){
        if(socks.top()==aux.top()){
            socks.pop();
            aux.pop();
            result++;
        }
    else {
        result++;
        aux.push(socks.top());
        socks.pop();
        }
    }
    else {
        result++;
        aux.push(socks.top());
        socks.pop();
    }
}
if(socks.empty()&&aux.empty()){
    cout<<result<<endl;
}
else {
    cout<<"imposible"<<endl;
}

return 0;
}