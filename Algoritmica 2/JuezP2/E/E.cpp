#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)

using namespace std;

int n; 

bool f(long long k) {
        return k*(k+1)/2<=n;
}

int binarySearch(long long left, long long right) {
    long long mid = (left + right) /2; 
    if(right>=left){
        if(f(mid)) {
            return binarySearch(mid+1,right);
        }
        else{
           return binarySearch(left, mid-1);
        }
    } else return mid;
}

int main() {
    input;
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<binarySearch(0,50000)<<endl;;
    }
    return 0;
}
