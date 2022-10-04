#include <bits/stdc++.h> // Para importar todas librerias
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
#define INF 100000010 // 1e9 
using namespace std;

int gcd_extended(int a, int b, int *x, int *y){
    if(a==0){
        *x=0;
        *y=1;
        return b;
    }
    int temp1,temp2;
    int gcd = gcd_extended(b%a, a, &temp1, &temp2);
    *x = temp2 - (b/a)*temp1;
    *y = temp1;
}

int main(){
    input;
    int a,b;
    cin>>a>>b;
    int *x,*y;
    int z = gcd_extended(a,b,x,y);

    cout<<a<<"x + "<<b;
}