#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s,x; cin>>n>>s>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int sum=0;
        for(int i:a) sum+=i;
        if((s-sum)%x==0 && (s-sum)>=0) cout<<"YES\n"; // S.M. didn't think of s<sum.
        else cout<<"NO\n";
    }
    return 0;
}