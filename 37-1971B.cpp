#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str; cin>>str;
        bool same=true;
        int x=0;
        for(int i=0;i<str.length();i++){
            if(str[i]!=str[0]){x=i;same=false;}
        }
        if(same==true) cout<<"NO\n";
        else{
            cout<<"YES\n";
            int y=str[x],z=str[0];
            str[x]=z;str[0]=y;
            cout<<str<<"\n";
        }
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY CLAUDE
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int diffIdx = -1;
        for (int i = 1; i < (int)s.size(); i++) {
            if (s[i] != s[0]) {
                diffIdx = i;
                break;
            }
        }

        if (diffIdx == -1) {
            cout << "NO\n";
        } else {
            swap(s[0], s[diffIdx]);
            cout << "YES\n" << s << "\n";
        }
    }
    return 0;
}
*/