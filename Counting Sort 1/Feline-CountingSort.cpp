#include <iostream>
#include <climits>

using namespace std;

int freq[110];

int main(){
    int n, inp, maxx;
    cin >> n;
    maxx = INT_MIN;
    for (int i = 1; i <= n; i++) {
        cin >> inp;
        freq[inp]++;
        maxx = max(maxx, inp);
    }
    for (int i = 0; i <= 99; i++) {
        cout << freq[i] << " ";
    }
    cout << "\n";
    return 0;
}

