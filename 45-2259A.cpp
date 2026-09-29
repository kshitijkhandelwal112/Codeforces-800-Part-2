#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int one=0;
        for(int i=0;i<(n/k);i++){
            bool found1=false;
            for(int j=0;j<k;j++){
                if(s[i*k+j]=='0') found1=true;
            }
            if(found1==false)one++;
        }
        cout<<one<<"\n";
    }
    return 0;
}