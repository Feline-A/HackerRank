#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m, x, y;
    double z;
    cin >> n >> m >> x >> y;
    z = sqrt(((x-n)*(x-n))+((y-m)*(y-m)));
    printf("%.4f\n", z);
    return 0;
}
