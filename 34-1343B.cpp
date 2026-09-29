#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        if(n%4!=0) cout<<"NO\n";
        else{
            cout<<"YES\n";
            int k=n/2;
            for(int i=1;i<=k;i++) cout<<2*i<<" ";
            for(int i=1;i<k;i++) cout<<2*i-1<<" ";
            cout<<2*k - 1 + k <<"\n";
        }
    }
    return 0;
}