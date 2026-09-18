#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    vector<char> str;
    for(int i=0;i<(int)s.size();i++){
        str.push_back(s[i]);
    }
    auto z = max_element(str.begin(),str.end());
    int k=0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]==(*z))k++;
    }
    for(int i=0;i<k;i++)cout<<(*z);
    cout<<"\n";
    return 0;
}