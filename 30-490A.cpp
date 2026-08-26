#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n;i++) cin>>a[i];
    int one=0,two=0,three=0;
    vector<int> x,y,z;
    for(int i=0;i<n;i++){
        if(a[i]==1){one++;x.push_back(i+1);}
        else if(a[i]==2){two++;y.push_back(i+1);}
        else{three++;z.push_back(i+1);}
    }
    // Learnt usage of min function in <algorithm>
    int w=min({one, two, three});
    cout<<w<<endl;
    for(int i=0;i<w;i++){
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
    return 0;
}
/* BEST CODE BY CLAUDE
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> onesIdx, twosIdx, threesIdx;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a == 1) onesIdx.push_back(i + 1);
        else if (a == 2) twosIdx.push_back(i + 1);
        else threesIdx.push_back(i + 1);
    }

    int teams = std::min({onesIdx.size(), twosIdx.size(), threesIdx.size()});
    std::cout << teams << "\n";
    for (int i = 0; i < teams; i++) {
        std::cout << onesIdx[i] << " " << twosIdx[i] << " " << threesIdx[i] << "\n";
    }

    return 0;
}
*/