#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int l,a,b; cin>>l>>a>>b;
        int diff = (b>=l ? (b%l):b);
        vector<int> z;
        z.push_back(a);
        int k = a;
        bool done=false;
        while(done==false){
            k = ((k+diff)>=l ? ((k+diff)%l):(k+diff));
            if(k!=a)z.push_back(k);
            else done=true;
        }
        auto y = max_element(z.begin(),z.end());
        cout<<(*y)<<"\n";
    }
    return 0;
}