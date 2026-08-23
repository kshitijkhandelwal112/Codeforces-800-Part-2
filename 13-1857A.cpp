#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        if(sum%2!=0)cout<<"NO"<<endl;
        // AI told one nice thing: The above steps weren't required, because sum would be odd only if number of odd numbers in the array would be odd.
        // And that thing is already covered below.
        else{
            int odd=0;
            for(int i=0;i<n;i++){
                if(a[i]%2!=0) odd++;
            }
            if(odd%2!=0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}