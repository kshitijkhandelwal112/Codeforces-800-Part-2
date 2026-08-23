#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int numk=0;
        for(int i=0;i<n;i++){
            if(a[i]==k) numk++;
        }
        if(numk>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}// AI suggested to use bool found variable, insted of using numk.