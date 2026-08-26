#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k; cin>>n>>k;
    int a[n];
    vector<int> b;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]<=(5-k)) b.push_back(a[i]);
    }
    cout<<b.size()/3<<endl;
    return 0;
}