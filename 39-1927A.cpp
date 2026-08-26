#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        string str; cin>>str;
        bool b1=false,b2=false;
        int s1,s2;
        for(int i=0;b1==false;i++){
            if(str[i]=='B'){s1=i;b1=true;break;}
        }
        reverse(str.begin(),str.end());
        for(int i=0;b2==false;i++){
            if(str[i]=='B'){s2=i;b2=true;break;}
        }
        s2=n-s2;
        cout<<s2-s1<<"\n";
    }
    return 0;
}
/* BEST CODE GIVEN BY AI
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int first = s.find('B');   // leftmost black cell
        int last  = s.rfind('B');  // rightmost black cell

        cout << (last - first + 1) << "\n";
    }
    return 0;
}
*/