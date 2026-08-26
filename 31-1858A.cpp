#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Claude suggested me to use these both lines in every code. Also this should be first thing in code.
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0){a++;c--;}// c-- wasn't actually required because it is not used anywhere else.
        /* The game worked like this:
        - To play optimally, both players would first try to complete common buttons so that they are no longer available for the opponent.
        - If common buttons are odd in number, obviously the last one would be available for first player only. So I did a++ and c--.
        - Now who wins simply depends on comparison of a and b. Larger one wins.
        */
        cout<<(a>b ? "First" : "Second")<<"\n";
    }
    return 0;
}