#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=a[i]%4;
        }
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)zero++;
            else if(a[i]==2) two++;
            else one++;
        }
        cout<<max({zero,one,two})<<"\n";
        
    }
    return 0;
}