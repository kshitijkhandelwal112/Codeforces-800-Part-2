#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> h(n);
        for(int i=0;i<n;i++) cin>>h[i];
        auto x = max_element(h.begin(),h.end());
        auto y = min_element(h.begin(),h.end());
        cout<<(*x)-(*y)+1<<"\n";
    }
    return 0;
}