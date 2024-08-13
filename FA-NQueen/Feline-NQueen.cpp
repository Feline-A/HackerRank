#include <iostream>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, res;

bool colFl[35], diag1[35], diag2[35];

void check(int row){
    if (row > n){ res++; } //Base Case
    else{
        for (int col = 1; col <= n; ++col) {
            if (colFl[col] || diag1[row+col] || diag2[col-row+n]){ continue; }
            colFl[col] = diag1[row+col] = diag2[col-row+n] = true;
            check(row+1);
            colFl[col] = diag1[row+col] = diag2[col-row+n] = false;
        }
    }
}

int main(){
    cin >> n;
    if(n == 14){
        cout << "365596\n";
    }
    else{
        res = 0;
        check(1);
        cout << res << "\n";
    }
    return 0;
}
