#include <iostream>

using namespace std;

int main(){
    int t, n, res;
    cin >> t;
    while(t--){
        cin >> n;
        res = (n * (1+n*n)) / 2;
        cout << res << "\n";
    }
    return 0;
}
