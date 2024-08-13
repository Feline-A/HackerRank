#include <iostream>

using namespace std;

int dt[1011];
int n;
int ans = 0;

void insertionSort(){
    int idx;
    for (int i = 2; i <= n; ++i) {
        idx = i;
        while(idx > 1 && dt[idx-1] > dt[idx]){
            swap(dt[idx-1], dt[idx]);
            idx--;
            ans++;
        }
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    insertionSort();
    cout << ans << "\n";

}
