#include <iostream>

using namespace std;

int main(){
    int n, i;
    long long res, a;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        a--;
        res = 1 + (3*(a*(a+1))/2);
    cout << res << "\n";
    }
    return 0;
}
