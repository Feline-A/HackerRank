#include <iostream>

using namespace std;

void gunung(int gambar){
    if (gambar == 1){
        cout << "*\n";
    }
    else{
        gunung(gambar-1);
        for(int i=1;i<=gambar;i++){
            cout << "*";
        }
        cout << "\n";
        gunung(gambar-1);
    }
}

int main(){
    int n;
    cin >> n;
    gunung(n);
    return 0;
}
