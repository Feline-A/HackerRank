#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() <<"\n";
    cout << a+b << "\n";
    a = b[0] + a;
    b = a[1] + b;
    a.erase(1, 1);
    b.erase(1, 1);
    cout << a << " " << b << "\n";
    return 0;
}
