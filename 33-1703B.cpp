#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n; // AI told that as we entered n, it was better to use it instead of typing str.length()
        string str; cin>>str;
        vector<bool> DoneOnce(26);
        for(int i=0;i<26;i++) DoneOnce[i]=false; // AI told not-req. because it was already initialized to false.
        int balloons=0;
        for(int i=0;i<str.length();i++){ // AI told that better to write it (int)str.length()
            if(DoneOnce[str[i]-'A']==false){
                DoneOnce[str[i]-'A']=true; // Silly mistake: did DoneOnce[i] here idk why didn't think.
                balloons += 2;
            }else balloons += 1;
        }
        cout<<balloons<<"\n";
    }
    return 0;
}