#include <iostream>

using namespace std;

int main(){
    int length, add;
    bool digit, lower, upper, special;
    digit=lower=upper=special=false;
    string pass;
    cin >> length;
    cin >> pass;
    add = 0;
    for(int i=0;i<length;i++){
        if (pass[i] >= 'A' && pass[i] <= 'Z'){
            upper = true;
        }
        else if (pass[i] >= 'a' && pass[i] <= 'z'){
            lower = true;
        }
        else if (pass[i] >= '0' && pass[i] <= '9'){
            digit = true;
        }
        else{
            special = true;
        }
    }
    if (upper == false){
        add++;
    }
    if (lower == false){
        add++;
    }
    if (digit == false){
        add++;
    }
    if (special == false){
        add++;
    }

    if (length >= 6){
        cout << add << "\n";
    }
    else{
        cout << (6-add) - length + add << "\n";
    }
    return 0;
}
