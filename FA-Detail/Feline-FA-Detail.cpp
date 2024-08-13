#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int km, m, cm;
    km = trunc(a/100000);
    m = trunc((a % 100000)/100);
    cm = (a%100000)%100;
    cout << km << " km, " << m << " m, " << cm << " cm\n";

    return 0;
}
