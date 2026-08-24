#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        int a[n];
        int d[n-1];
        bool done=false;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){cout<<0<<endl;done=true;break;}
            else{d[i]=a[i+1]-a[i];if(i==n-2) break;}// ChatGPT suggested to take i<n-1 in the for loop itself rather than if(i==n-2)break; statement.
        }
        if(done==false){
            int min=d[0];
            int j=0;
            while(j<n-1){
                if(d[j]<min) min=d[j];
                j++;
            }
            cout<<(min/2)+1<<endl;
        }
        
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                ans = 0;
                break;
            }

            ans = min(ans, a[i + 1] - a[i]);
        }

        if (ans == 0)
            cout << 0 << '\n';
        else
            cout << ans / 2 + 1 << '\n';
    }

    return 0;
}
*/