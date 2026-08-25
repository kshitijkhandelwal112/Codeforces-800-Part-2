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