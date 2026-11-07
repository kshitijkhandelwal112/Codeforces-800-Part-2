#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a,b,c; cin>>a>>b>>c;
        long long z = a+c-b;
        if(b>=a){
            long long y = b-a;
            if(z>y) cout<<z<<"\n";
            else cout<<y<<"\n";
        }else{
            cout<<z<<"\n";
        }
    }
    return 0;
}