#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char grid[2*n][2*n];
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                int x=i/2, y=j/2;
                if(x%2==0 && y%2==0) grid[i][j]='#';
                else if(x%2!=0 && y%2!=0) grid[i][j]='#';
                else grid[i][j]='.';
            }
        }
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                cout<<grid[i][j];
                if(j==2*n-1) cout<<"\n";
            }
        }
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < 2 * n; j++) {
                cout << ((i / 2 + j / 2) % 2 == 0 ? '#' : '.');
            }
            cout << '\n';
        }
    }
}
*/