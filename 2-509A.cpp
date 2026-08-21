#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int grid[n][n];
    for(int i=0;i<n;i++){grid[i][0]=1;grid[0][i]=1;}
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            grid[i][j]=grid[i-1][j]+grid[i][j-1];
        }
    }
    cout<<grid[n-1][n-1]<<endl;
    return 0;
}
/* BEST SOLUTION GIVEN BY AI
Whole grid not required, we can maintain just 1 row.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            dp[j] += dp[j - 1];
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}
*/