#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        string a; cin>>a;
        vector<char> A;
        for(int i=0;i<n;i++) A.push_back(a[i]);
        int m; cin>>m;
        string b; cin>>b;
        string c; cin>>c;
        for(int i=0;i<m;i++){
            if(c[i]=='V') A.insert(A.begin(),b[i]);
            else A.push_back(b[i]);
        }
        string s(m+n,' '); // Silly mistake, I used " " instead of ' '.
        for(int i=0;i<n+m;i++) s[i]=A[i];
        cout<<s<<"\n";
    }
    return 0;
}