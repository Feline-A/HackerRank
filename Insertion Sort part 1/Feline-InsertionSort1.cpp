#include <iostream>

using namespace std;

int dt[1010];
int n;

void print(){
    for(int i=1;i<=n;i++){
        cout << dt[i] ;
        if (i < n){
            cout << " ";
        }
    }
    cout << "\n";
}

void insertionSort(int ct){
    int idx = n;
    while(idx > 1 && dt[idx-1] > ct){
        //swap(dt[idx-1], dt[idx]);
        dt[idx] = dt[idx-1];
        idx--;
        print();
    }
    dt[idx] = ct;
    print();
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    insertionSort(dt[n]);
    return 0;
}
