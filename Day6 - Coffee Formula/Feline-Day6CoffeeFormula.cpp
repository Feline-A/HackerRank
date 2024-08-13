#include <iostream>
#include <cmath>

using namespace std;

string nama[5];
int kopi[5][10];

int main(){
    int t;
    string x, ans1, ans2;
    t = 2;
    cin >> t;
    for(int i=1;i<=t;i++){
        double ct = 0;
        int ans = -1;
        for(int j=1;j<=3;j++){
            cin.ignore();
            getline(cin, x);
            nama[j] = x;
            for(int z=1;z<=5;z++){
                cin >> kopi[j][z];
            }
        }
        for(int j=1;j<3;j++){
            for(int z=j+1;z<=3;z++){
                double a = kopi[j][1] * kopi[z][4] + kopi[z][1] * kopi[j][4];
                double b = kopi[j][2] * kopi[z][3] + kopi[z][2] * kopi[j][3];
                double c = kopi[j][5] + kopi[z][5];
                ct = round(abs((a-b)/c));
                if (ct > ans){
                    ans = ct;
                    ans1 = nama[j];
                    ans2 = nama[z];
                }
            }
        }

        cout << "Case #" << i << ": Kopi " << ans1 << " - " << ans2 << " = " << ans << "\n";
    }
    return 0;
}
