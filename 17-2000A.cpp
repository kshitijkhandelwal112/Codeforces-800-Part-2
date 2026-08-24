#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a; cin>>a;
        int x=a/1000;
        int y=(a%1000)/100;
        int z=(a%100)/10;
        int w=(a%10);
        if(x==1 && y==0){
            if(z==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }else if(x==0 && y==1 && z==0){
            if(w<2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}// AI suggested to use 2 ranges, 102 to 109 and 1010 to 1099, and if a lies in one of those 2 ranges, then YES else NO.
// No need to use digits and all.