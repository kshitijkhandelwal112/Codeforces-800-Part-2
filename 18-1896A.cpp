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
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(a);
        vector<int> c; // Using this was what I thought at the end.
        sort(b.begin(),b.end());
        bool done=false;
        while(done==false){
            for(int i=1;i<n-1;i++){
                if(a[i]>a[i-1] && a[i]>a[i+1]){
                    int x=a[i],y=a[i+1];
                    a[i]=y;a[i+1]=x;
                }
            }
            if(b==a) done=true;
            else if(c==a) done=true;
            c = a; // This was done to ensure that nothing changes and infinite loop started.
        }
        
        if(b==a) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY Claude
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << (a[0] == 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}

Reason: 1 is the smallest element in the array, and it has to be in the first position in the sorted array.
So it simply can't be swapped too, with anyone.
Thus all arrays where 1 is in the beginning can be sorted in such way, because in all cases there would be a finite number of operations required to sort the rest elements.
*/