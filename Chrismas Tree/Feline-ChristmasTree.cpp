#include <iostream>

using namespace std;

int main(){
    int n, spcSum, starSum;
    cin >> n;
    starSum = 1;
    spcSum = (n*2)+2;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=3;j++){
            for (int k=1;k<=spcSum;k++){
                cout << " ";
            }
            for (int k=1;k<=starSum;k++){
                cout << "*";
                if (k < starSum){
                    cout << " ";
                }
            }
            starSum += 2;
            spcSum -= 2;
            cout << "\n";
        }
        spcSum += 4;
        starSum -= 4;
    }
    for (int i=1;i<=(n*2)+2;i++){
        cout << " ";
    }
    cout << "|\n";
    return 0;
}
