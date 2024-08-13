#include <iostream>

using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    for(int i=2;i<=(n-1)*2;i+=2){
        ans=i;
    }
    cout << ans << "\n";
    return 0;
}
