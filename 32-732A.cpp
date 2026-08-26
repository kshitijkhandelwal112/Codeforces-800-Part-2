#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,r; cin>>k>>r;
    bool done=false;
    int i=1;
    while(done==false){
        if((k*i)%10==r || (k*i)%10==0) done=true; // SM- forgot remainder 0 case, but on seeing example got it corrected.
        else i++;
    }
    cout<<i<<"\n";
    // Claude suggested that instead of using while loop, I could use for loop, with cout<<i in an if condition and then break;
    return 0;
}