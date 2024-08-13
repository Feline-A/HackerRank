#include <iostream>

using namespace std;

string kata[200];

int main(){
    string a;
    string b;
    bool check;
    cin >> a;
    cin >> b;
    for(int i=0;i<b.size();i++){
        kata[i] = b[i];
    }

    for(int i=0;i<b.size();i++){
        check = false;
        for(int j=0;j<a.size();j++){
            if (b[i] == a[j]){
                check = true;
                if (j != a.size()-1){
                    cout << a[j+1];
                }
                else{
                    cout << a[0];
                }
            }
        }
        if (check == false){
            cout << b[i];
        }
    }
    cout << "\n";
    return 0;
}
