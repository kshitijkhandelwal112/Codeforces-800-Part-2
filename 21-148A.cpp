#include <iostream>
using namespace std;
int main(){
    // I just got more and more confused (gave 40 minutes), complicating things, and at the end needed to take help of AI.
    // This is the solution given by AI.
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    // This is the nice step:
    int count=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) count++;
    }
    cout<<count<<endl;
    return 0;
}