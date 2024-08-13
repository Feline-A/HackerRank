#include <iostream>

using namespace std;

int main(){
    int n, k;
    string s;
    cin >> n;
    cin >> s;
    cin >> k;

    for(int i=0;i<n;i++){
        if (s[i] != '-'){
            s[i] = s[i] + k;
        }
    }
    cout << s << "\n";
    return 0;
}
