#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

int main() {
    input;
    int kids;
    cin >> kids;
    int instructions;
    cin >> instructions;
    stack<int> moves;
    for(int i = 0; i < instructions; i++) {
        string instruction;
        cin >> instruction;
        int number; 
        if(instruction == "undo"&&!moves.empty()) {
            cin >> number;
                for (int i=0;i<number;i++){
                    moves.pop();
                }
        }
        else {
            number = stoi(instruction); 
            moves.push(number);
        }
    }
    int total = 0;
    while(!moves.empty()) {
        total += moves.top();
        moves.pop();
    }
    if(total > 0) {
        cout<<total%kids<<endl;
    }else {
        cout<<kids - (total*-1)%kids<<endl;
    }
    return 0;
}