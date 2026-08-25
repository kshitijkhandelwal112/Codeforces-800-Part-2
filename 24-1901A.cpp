#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x; cin>>n>>x;
        int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        int max=a[0];
        // Let f=full fuel quantity. f is only asked, nothing else
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>max) max=a[i]-a[i-1];
        }
        if(max<2*(x-a[n-1])) max = 2*(x-a[n-1]);
        cout<<max<<endl;
    }
    return 0;
}
/* Claude Suggestions:
- Don't use endl, instead \n;
- Don't use 'max' as variable with "using namespace std" it is risky.
- better use vector<int> instead of variable length arrays.
*/