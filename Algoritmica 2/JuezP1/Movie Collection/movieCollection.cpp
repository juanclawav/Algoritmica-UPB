#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
using namespace std;

const int MAX = 200000;
int BIT[MAX], pos[MAX];

void add(int index, int n) {
	for (int i = index; i < MAX; i += i & -i) {
		BIT[i] += n;
	}
}
int sum(int index) {
	int peliBorrada = 0;
	for (int i = index; i; i -= i & -i) {
		peliBorrada += BIT[i];
	}
	return peliBorrada;
}
int main() {
    input;
	int ops;
    cin>>ops;
	while (ops--) {
		int pelisTotal, pelisAquitar;
        cin>>pelisTotal>>pelisAquitar;
		fill(BIT+1, BIT+1+pelisTotal+pelisAquitar, 0);
		for (int i = 1; i <= pelisTotal; ++ i) {
			pos[i] = pelisTotal - i + 1;
			add(i, 1);
		}
		int contador = pelisTotal;
		for (int i = 0; i < pelisAquitar; ++ i) {
			int peli;
            cin>>peli;
			int pelisDebajo = sum(pos[peli]);
            if(i == pelisAquitar-1){
                cout<<pelisTotal - pelisDebajo;
            } else{
                cout<<pelisTotal - pelisDebajo<<" ";
            }
			add(pos[peli], -1);
			pos[peli] = ++contador;
			add(pos[peli], 1);
		}
        cout<<""<<endl;
	}
	return 0;
}