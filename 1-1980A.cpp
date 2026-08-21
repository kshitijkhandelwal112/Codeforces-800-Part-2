#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        char LEVELS[7]={'A','B','C','D','E','F','G'};
        int a,b,c,d,e,f,g;
        int levels[7]={a,b,c,d,e,f,g};
        for(int i=0;i<7;i++) levels[i]=0; // AI said that initialisation must be better done before entering into array.
        for(int i=0;i<n;i++){
            for(int j=0;j<7;j++){
                if(str[i]==LEVELS[j]) levels[j]++;
            }
        }
        bool finale=false;
        int newprob=0;
        for(int i=0;finale==false;i++){
            int done=0;
            for(int j=0;j<7;j++){
                if(levels[j]<m){newprob++;levels[j]++;}
                else done++;
            }
            if(done==7) finale=true;
        }
        cout<<newprob<<endl;
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI (this frequency method is to be learnt, many times it is used in questions.)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        string s;
        cin >> n >> m >> s;

        int freq[7] = {};

        for (char c : s)
            freq[c - 'A']++;

        int ans = 0;

        for (int i = 0; i < 7; i++)
            ans += max(0, m - freq[i]);

        cout << ans << '\n';
    }
}
*/