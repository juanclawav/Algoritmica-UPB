#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

string patron; // cadena del patron
int m;         // tamaño del patron
string texto;  // texto donde se buscara el patron
int n;          // tamaño del texto;

//TODO: verificar el tamaño de acuerdo al problema
vector<int> b(10000);

void kmpProcess() {
    int i = 0, j = -1;
    b[0] = -1;
    while(i < m) {
        while((j>=0) && (patron[i] != patron[j])) {
            j = b[j];
        }
        i++; j++;
        b[i] = j;
    }
    for(int i = 0 ; i< m; i++) {
        cout<<"["<<b[i]<<"]";
    }
    cout<<endl;
}
int kmpSearch() {                               
  int freq = 0;                                     // contar cuantas veces se encuentra el patron dentro del texto
  int i = 0, j = 0;                              
  while (i < n) {                                
    while ((j >= 0) && (texto[i] != patron[j])) {
        j = b[j];                        
    }                                      
    ++i; ++j;                                    
    if (j == m) {                                
      ++freq;
      printf("P is found at index %d in T\n", i-j);
      j = b[j];                                  
    }
  }
  return freq;
}


int main() {
    string ini="linpi";
    string test = "pjlin";
    int n=test.length();
    int i=0;
    int res;
    bool cando=false;
    while(i<n){
    char temp;
    temp=test[0];
    for (int j=1;j<test.length();j++){
        test[j-1]=test[j];
    }
    test[test.length()-1]=temp;
    i++;
    if(ini==test){
        cando=true;
        res=i;
    }
    }
    if(cando){
    cout<<res;
    }
    else{
        cout<<-1;
    }
}