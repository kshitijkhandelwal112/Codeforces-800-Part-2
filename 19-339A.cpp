#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s; cin>>s;
    vector<int> b;
    for(int i=0;i<s.length();i++){
        if(i%2==0) b.push_back(s[i]-'0');
    }
    sort(b.begin(),b.end());
    for(int k=0;k<b.size()-1;k++){
        cout<<b[k]<<'+';
    }
    cout<<b.back()<<endl;
    return 0;
}
/* GOOD METHOD GIVEN BY CHATGPT, BUT VALID ONLY FOR THIS QUESTION, AS STRING ONLY INCLUDES + AND NUMBERS.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+')
            cout << s[i] << (i == s.length() - 1 ? '\n' : '+');
    }
}

BEST SOLUTION GIVEN BY CLAUDE: (idk why it is so long... mine is quite shorter...)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    vector<int> digits;
    for (size_t i = 0; i < s.length(); i += 2) {  // skip '+' directly instead of checking i%2
        digits.push_back(s[i] - '0');
    }
    
    sort(digits.begin(), digits.end());
    
    for (size_t i = 0; i < digits.size(); i++) {
        if (i > 0) cout << '+';
        cout << digits[i];
    }
    cout << '\n';
    
    return 0;
}
*/