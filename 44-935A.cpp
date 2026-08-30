#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int ways=0;
    for(int l=1;l<n;l++){
        if((n-l)%l==0) ways++;
    }
    cout<<ways<<"\n";
    return 0;
}