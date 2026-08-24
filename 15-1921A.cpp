#include <iostream>
using namespace std;
// Earlier ideas: Trying to compute side by distance formuly (idk why didn't think properly)
int main() {
    int t;
    cin >> t;
    while (t--){
        int x[4],y[4];
        for(int i=0;i<4;i++) cin>>x[i]>>y[i];
        int side=0;
        for(int i=1;i<4;i++){
            if(x[0]==x[i]) side=abs(y[0]-y[i]);// Silly mistake: forgot abs + wrote 4 lines instead of loop.
            // AI suggested to write a break; too here.
        }
        cout<<side*side<<endl;
    }
    // AI recommended one nice thing: (and for that #include <algorithm> required)
    // side = *max_element(x,x+4) - *min_element(x,x+4)
    // So pointers are used here. And using them, max/min element in the array found.
    return 0;
}