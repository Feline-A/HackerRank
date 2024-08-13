#include <iostream>
#include <algorithm>
#include <vector>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
//           P         R         M     H
vector< pair<int, pair<int, pair<int, int>>> > vi;

int main(){
    FASTIO
    int u, n, p, r, m, h;
    cin >> u;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p >> r >> m >> h;
        if (h <= u){
            vi.emplace_back(make_pair(p, make_pair(r, make_pair(m, h*-1))));
        }
    }
    sort(vi.begin(), vi.end());
    //for (auto x : vi) {
        //cout << x.first << " " << x.second.first << " " << x.second.second.first
            //<< " " << abs(x.second.second.second) << "\n";
    //}
    if (vi.empty()){
        cout << "Eep tidak dapat membeli laptop\n";
    }
    else{
        cout << vi.back().first << " " << vi.back().second.first << " " << vi.back().second.second.first << " " << abs(vi.back().second.second.second) << "\n";
    }

    return 0;
}
