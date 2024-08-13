#include <iostream>

using namespace std;

int cost[10100];

int main(){
    int t, m, n;
    cin >> t;
    int ans1 = 0;
    int ans2 = 0;
    for(int i=1;i<=t;i++){
        cin >> m;
        cin >> n;
        for(int j=1;j<=n;j++){
            cin >> cost[j];
        }
        for(int z=1;z<n;z++){
            for(int x=z+1;x<=n;x++){
                if (cost[z] + cost[x] == m){
                    ans1 = z;
                    ans2 = x;
                }
            }
        }
        cout << ans1 << " " << ans2 << "\n";
    }
    return 0;
}
