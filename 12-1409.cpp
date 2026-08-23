#include <iostream>
using namespace std;
// Older solution: Time limit exceeded as loops used for large numbers.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b; cin>>a>>b;
        int moves=0;
        if(a!=b){ // This was improvement. Instead of a>b and a<b as separate cases, this was better.
            int diff=abs(a-b);
            while(diff>0){
                if(diff>=10) moves=moves+diff/10;diff=diff%10; // Silly mistake: I wrote diff=diff/10 instead of diff%10
                // Another silly mistake: I left case of diff=10, i.e. wrote only diff>10 instead of diff>=10
                if(diff<10 && diff>0) moves++;diff=0;
            }
            cout<<moves<<endl;
        }else{
            cout<<moves<<endl;
        }
    }
}
/* BEST SOLUTION GIVEN BY AI
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        cout << diff / 10 + (diff % 10 != 0) << endl;
    }
}
*/