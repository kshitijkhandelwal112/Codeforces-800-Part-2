#include <iostream>
using namespace std;

int main() {
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);
    // AI told that a[1] is the required point but I don't understand why.
    // cout<<abs(a[0]-a[1])+abs(a[1]-a[2])<<endl;
    // Even this above statement is not required. Rather a[2]-a[0] is answer.

    // It is simply basic concept. If we wanted only 2 people to meet, the required position would be any point in between the 2 people.
    // But since a third person is also there, and magnitude of its distance also adds up, the total distance would be minimized only when he doesn't move at all.
    cout<<a[2]-a[0]<<endl;
}