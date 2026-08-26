#include <iostream>
#include <algorithm> // SM-0: Forgot this one for sort()
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i]; // SM-2: Clearing SM-1 here by mistake.
        sort(a.begin(),a.end());
        int p=0;
        for(int i=0;i<n-1;i++){ // SM-1: i<n instead of i<n-1
            if((a[i+1]-a[i])>1){cout<<"NO\n";break;}
            else p++;
        }
        // AI told that better to use boolean variables instead of p. Like bool ok = true; and if(a[i+1]-a[i]>1) ok=false;
        // and later, cout<<(ok ? "YES":NO)<<"\n";
        if(p==n-1) cout<<"YES\n"; // SM-3: n-1 should be here and I wrote n.
    }
    return 0;
}