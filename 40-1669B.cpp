#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        auto z = max_element(a.begin(),a.end());
        vector<int> freq((*z)+1,0);
        bool found=false;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
            if(freq[a[i]]==3){
                cout<<a[i]<<"\n";
                found=true;
                break;
            }
        }
        if(found==false) cout<<-1<<"\n";
    }
    return 0;
}