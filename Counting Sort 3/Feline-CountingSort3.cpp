#include <iostream>
#include <climits>

using namespace std;

int freq[110];

int main(){
    int n, inp, maxx;
    string a;
    cin >> n;
    maxx = INT_MIN;
    for (int i = 1; i <= n; i++) {
        cin >> inp >> a;
        freq[inp]++;
        maxx = max(maxx, inp);
    }
    int add = 0;
    for (int i = 0; i <= maxx; i++) {
        while(freq[i] > 0){
            cout << freq[i] + add<< " ";
            add += freq[i];
            freq[i] = 0;
        }
    }
    for(int i=1;i<100-maxx;i++){
        cout << add << " ";
    }
    cout << "\n";
    return 0;
}
