#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> p(3*n);
        for(int i=0;i<3*n;i+=3){
            p[i]=(i/3)+1;
        }
        int j=1;
        for(int i=1;i<3*n;i+=3){
            p[i]=n+j;
            p[i+1]=n+j+1;
            j+=2;
        }
        for(int i=0;i<3*n;i++){
            cout<<p[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}