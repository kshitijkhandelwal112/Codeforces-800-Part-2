#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1; cin>>str1;
    string str2; cin>>str2;
    string str=str1+str2;
    string str3; cin>>str3;
    if(str.length()!=str3.length()){cout<<"NO"<<endl; return 0;}
    bool mapped[str.length()];
    // AI suggested to better use: vector<bool> mapped(str.length(), false); and avoid VLAs (Variable Length Arrays).
    for(int i=0;i<str.length();i++) mapped[i]=false;
    for(int i=0;i<str3.length();i++){
        for(int j=0;j<str.length();j++){
            if(str[i]==str3[j] && mapped[j]==false){mapped[j]=true;break;}
        }
    }
    for(int i=0;i<str.length();i++){
        if(mapped[i]==false){cout<<"NO"<<endl; return 0;}
    }
    cout<<"YES"<<endl;
    return 0;
}// AI told that my solution is not good because it is O(n^2).
// A good method told by chatgpt: sort the strings, then compare them directly, no need to compare character by character.
/* ANOTHER GOOD SOLUTION LIKE MINE TOLD BY CLAUDE:
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    string combined = str1 + str2;

    if (combined.length() != str3.length()) {
        cout << "NO\n";
        return 0;
    }

    array<int, 26> freq{}; // zero-initialized

    for (char c : combined) freq[c - 'a']++;
    for (char c : str3) freq[c - 'a']--;

    for (int count : freq) {
        if (count != 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
*/