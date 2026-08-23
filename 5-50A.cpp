// I was confused seeing this problem and "Greedy" written in this problem, and had to see solution (tutorial)
// And when I saw tutorial, it was rather too easy, I just had to believe that this method is not wrong...
#include <iostream>
using namespace std;
int main(){
    int M,N;
    cin>>M>>N;
    /*Thought Process:
    if(N%2==0){
        // We would make M rows of N/2 dominoes.
        cout<<M*N/2;
    }
    else{
        // We would make M rows of (N-1)/2 dominoes and in last comumn, vertical dominoes, [M/2] in number ([.]=GIF)
        // Also, (N-1)/2 is the same as [N/2] and M and N being integers, operations on them will give integers only, i.e. GIF (as M & N are +ve).

    } */
    // Thus the final single line of code that can be written is simply:
    cout<<(M*N)/2<<endl;
    return 0;
}