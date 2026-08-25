#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        if(n%3==0)cout<<"Second"<<endl;
        else if(n%3==1)cout<<"First"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
/* BEST SOLUTION BY CLAUDE
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n % 3 == 0 ? "Second" : "First") << "\n";
    }
    return 0;
}
"Two IO habits (sync_with_stdio(false) + "\n") that will matter once you hit problems with large t or heavy output.""
*/