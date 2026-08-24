#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int differ1=0,differ2=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0 && i%2!=0) differ1++;
            else if(a[i]%2!=0 && i%2==0) differ2++;
        }// silly mistake: I just took one variable: differ, and incremented it in both cases.
        // so, if both 2 numbers to be interchanged belonged to (a[i]%2==0 && i%2!=0) category, nothing would happen on interchanging them.
        if(differ1==differ2) cout<<differ1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
// For best solution, ChatGPT suggested that instead of inputing an array, we could simply input one x at a time and check for that, %2 and all...