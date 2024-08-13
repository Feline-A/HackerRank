#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <string> dt[110];

int main(){
    int n, a;
    int maxx = INT_MIN;
    string x;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> x;
        if (n/2 >= i){
           dt[a].emplace_back("-");
        }
        else{
            dt[a].emplace_back(x);
        }
        maxx = max(maxx, a);
    }
    for(int i=0;i<=maxx;i++){
        for(int j=0;j<dt[i].size();j++){
            cout << dt[i][j];
            if (j < dt[i].size()){
                cout << " ";
            }
        }
    }
    cout << "\n";
    return 0;
}
