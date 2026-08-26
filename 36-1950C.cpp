#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; cin>>s;
        int h=10*(s[0]-'0') + s[1]-'0';
        string mm = s.substr(2,3); // to get substring use:  s.substr(starting_pos, No_of_Char);
        if(h==0) cout<<"12"<<mm<<" AM\n";
        else if(h>0 && h<10) cout<<"0"<<h<<mm<<" AM\n";
        else if(h==10 || h==11)cout<<h<<mm<<" AM\n";
        else if(h==12) cout<<"12"<<mm<<" PM\n";
        else if(h>12 && h<22) cout<<"0"<<(h-12)<<mm<<" PM\n";
        else if(h==22 || h==23) cout<<(h-12)<<mm<<" PM\n";
    }
    return 0;
}
/* BEST VERSION GIVEN BY AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int h, m;
        char colon;
        cin >> h >> colon >> m;

        string period = (h < 12) ? " AM" : " PM";
        int h12 = h % 12;
        if (h12 == 0) h12 = 12;

        cout << setw(2) << setfill('0') << h12 << ":"
             << setw(2) << setfill('0') << m << period << "\n";
    }
    return 0;
}
*/