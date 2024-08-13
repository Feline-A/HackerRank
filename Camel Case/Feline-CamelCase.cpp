#include <iostream>

using namespace std;

int main(){
    string s;
    int ans = 1;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
