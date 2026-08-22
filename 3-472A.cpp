#include <iostream>
using namespace std;
bool primecheck(int a){
    bool prime=false;
    int x=0;
    for(int i=2;i<a;i++){
        if(a%i!=0) x++;
    }
    if(x==a-2) prime=true;
    return prime;
}
int main(){
    int n; cin>>n;
    bool found=false;
    int i=4;
    int finale=0;
    while(found==false){
        if(primecheck(i)==false && primecheck(n-i)==false){
            finale=i;
            found=true;
        }else i++;
    }
    cout<<finale<<" "<<n-finale<<endl;
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << 4 << " " << n - 4 << endl;
    else
        cout << 9 << " " << n - 9 << endl;
    return 0;
}
4 and 9 begin smallest even and odd composite numbers respectively, one of them will always be a case.
*/