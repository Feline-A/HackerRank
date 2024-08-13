#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, res;
    cin >> s;
    res = "";
    while(s != ""){
        if(s[0] == s[s.find(s[0])]){
            s.erase(0, 1);
            s.erase(s.find(s[0]), 1);
        }
        else{
            res += s[0];
            s.erase(0, 1);
        }
    }
    cout << res << "\n";
    return 0;
}
