#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    bool stats[n];
    for(int i=0;i<n;i++) stats[i]=false;
    int p1; cin>>p1;
    int arr1[p1];
    for(int i=0;i<p1;i++){cin>>arr1[i];}
    int p2; cin>>p2;
    int arr2[p2];
    for(int i=0;i<p2;i++){cin>>arr2[i];}
    for(int i=0;i<n;i++){
        for(int j=0;j<p1;j++){
            if(arr1[j]==i+1) stats[i]=true;
        }
        for(int j=0;j<p2;j++){
            if(arr2[j]==i+1) stats[i]=true;
        }
    }
    for(int i=0;i<n;i++){
        if(stats[i]==false){cout<<"Oh, my keyboard!"<<endl;return 0;}
    }
    cout<<"I become the guy."<<endl;
    return 0;
}