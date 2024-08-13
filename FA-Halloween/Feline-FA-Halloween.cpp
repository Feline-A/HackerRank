#include <iostream>

using namespace std;

int main(){
    int x, y, endd;
    cin >> x >> y;
    endd = x+y;
    if ( (x <= 7 && endd >= 7) ||
         (x <= 37 && endd >= 37) ||
         (x <= 67 && endd >= 67) ||
         (x <= 79 && endd >= 79) ||
         (x <= 97 && endd >= 97)){
        cout << "Bebek akan Kalah\n";
    }
    else{
        cout << "Bebek akan Menang\n";
    }
    return 0;
}
