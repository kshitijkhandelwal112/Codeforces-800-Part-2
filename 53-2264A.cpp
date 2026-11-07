#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++) cin>>p[i];
        vector<int> ideal(n);
        for(int i=0;i<n;i++) ideal[i]=i+1;
        vector<int> b;
        for(int i=0;i<n;i++){
            if(p[i]!=ideal[i]) b.push_back(p[i]);
        }
        vector<int> sorter(b);
        sort(sorter.rbegin(),sorter.rend());
        if(sorter==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}