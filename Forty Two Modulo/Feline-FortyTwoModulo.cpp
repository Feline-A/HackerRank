#include <iostream>

using namespace std;

int num[50];

int main(){
    int inp, res;
    res = 0;
    for (int i=1;i<=10;i++){
        cin >> inp;
        num[inp % 42] = 1;
    }
    for (int i=0;i<=41;i++){
        res += num[i];
    }
    cout << res << "\n";
    return 0;
}
