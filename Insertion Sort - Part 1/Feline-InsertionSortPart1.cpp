#include <iostream>

using namespace std;

int dt[1010];

void insertionSort(){
    int idx;
    for (int i = n; i <= 2; i--) {
        idx = i;
        while(idx > 1 && dt[idx-1] > dt[idx]){
            swap(dt[idx-1], dt[idx]);
            idx--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    insertionSort();

    return 0;
}
