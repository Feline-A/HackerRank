#include <iostream>

using namespace std;

int pizza[110];

int main(){
    int t, n, ct, ans, res, amount;

    cin >> t;
    for (int j=1;j<=t;j++){
        cin >> n;
        ans = 0;
        for(int i=0;i<n;i++){
            cin >> pizza[i];
        }

        for(int i=0;i<n;i++){
            amount = n/2;
            ct = (i+(n/2))%n;
            res = pizza[i] + pizza[ct];
            amount -= 2;
            int k = 1;
            while(amount > 0){
                res += pizza[(ct-k+n)%n] + pizza[(ct+k+n)%n];
                amount -= 2;
                k++;
            }
            ans = max(ans, res);
        }
        cout << "Case #" << j << ": " << ans << "\n";
    }
    return 0;
}
