#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << min(a, min(b, min(c, min(d, e)))) << " " << max(a, max(b, max(c, max(d, e)))) << "\n";
    return 0;
}
