#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for (int z=1;z<n-i;z++){
            cout << " ";
        }
        for(int x=0;x<(2*i)+1;x++){
            cout << "*";
        }
        cout << "\n";
    }
    n -= 1;
    for (int i=0;i<n;i++){
        for(int a=1;a<i+2;a++){
            cout << " ";
        }
        for(int s=0;s<(2*(n-i))-1;s++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
