#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
        int one=0,two=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)one++;
            else two++;
        }
        if(one%2==0 && two%2==0) cout<<"YES\n";
        else if(one%2!=0) cout<<"NO\n";
        else if(one%2==0 && two%2!=0){
            if(one>=2) cout<<"YES\n";
            else cout<<"NO\n";
        } 
        
    }
    return 0;
}