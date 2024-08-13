#include <iostream>

using namespace std;

int freq[100100];

int main(){
    int n, m, a, b;
    int maxx = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        freq[a]++;
        if (maxx < a){
            maxx = a;
        }
    }
    cin >> m;
    for(int i=1;i<=m;i++){
        cin >> b;
        freq[b]--;
    }

    for(int i=1;i<=maxx;i++){
        if (freq[i] != 0){
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}
