#include <iostream>
using namespace std;

int main(){
    double r, pi, luas, volume;
    cin >> r;
    //pi = 22/7.0;
    luas = (22 * r * r) / 7.0;//pi * (r*r);
    volume = (4 * 22 * r * r * r) / (3.0 * 7.0);//(4.0/3.0) * pi * (r*r*r);
    printf("Luas Lingkaran = %.10f\n", luas);
    printf("Volume Bola = %.10f\n", volume);

    return 0;
}
