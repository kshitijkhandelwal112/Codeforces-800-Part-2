#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    int x=(n%100)%20;
    cout<<(n/100) + (n%100)/20 + x/10 + (x%10)/5 + (x%10)%5<<endl;
    return 0;
}